/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H

/*
 * tiger internal I/O mappings
 *
 * We have the following mapping:
 *      phys            virt
 *      20000000        E0000000
 *      60000000        E0010000
 *      80000000        E0020000/E0030000
 */

#define SCI_IOMAP_BASE		0xE0000000
#define SCI_IOMAP(x)		(SCI_IOMAP_BASE + (x))

#define SPRD_NIC301_BASE	SCI_IOMAP(0)
#define SPRD_NIC301_PHYS	0x10600000
#define SPRD_NIC301_SIZE	SZ_1M

#define SPRD_DMA0_BASE		SCI_IOMAP(0x100000)
#define SPRD_DMA0_PHYS		0X20100000
#define SPRD_DMA0_SIZE		SZ_1M

#define SPRD_DCAM_BASE		SCI_IOMAP(0x200000)
#define SPRD_DCAM_PHYS		0X20200000
#define SPRD_DCAM_SIZE		SZ_1M

#define SPRD_USB_BASE		SCI_IOMAP(0x300000)
#define SPRD_USB_PHYS		0X20300000
#define SPRD_USB_SIZE		SZ_1M

#define SPRD_SDIO0_BASE		SCI_IOMAP(0x400000)
#define SPRD_SDIO0_PHYS		0X20500000
#define SPRD_SDIO0_SIZE		SZ_1M

#define SPRD_SDIO1_BASE		SCI_IOMAP(0x500000)
#define SPRD_SDIO1_PHYS		0X20600000
#define SPRD_SDIO1_SIZE		SZ_1M

#define SPRD_SDIO2_BASE		SCI_IOMAP(0x600000)
#define SPRD_SDIO2_PHYS		0X20E00000
#define SPRD_SDIO2_SIZE		SZ_1M

#define SPRD_LCDC_BASE		SCI_IOMAP(0x800000)
#define SPRD_LCDC_PHYS		0X20700000
#define SPRD_LCDC_SIZE		SZ_4K

#define SPRD_ROTO_BASE		SCI_IOMAP(0x801000)
#define SPRD_ROTO_PHYS		0X20800000
#define SPRD_ROTO_SIZE		SZ_4K

#define SPRD_AHB_BASE		SCI_IOMAP(0x900000)
#define SPRD_AHB_PHYS		0X20900000
#define SPRD_AHB_SIZE		SZ_1M

#define SPRD_DRM_BASE		SCI_IOMAP(0xa00000)
#define SPRD_DRM_PHYS		0X20B00000
#define SPRD_DRM_SIZE		SZ_4K

#define SPRD_VSP_BASE		SCI_IOMAP(0xb00000)
#define SPRD_VSP_PHYS		0X20C00000
#define SPRD_VSP_SIZE		SZ_1M

#define SPRD_EMMC_BASE		SCI_IOMAP(0xc00000)
#define SPRD_EMMC_PHYS		0X20F00000
#define SPRD_EMMC_SIZE		SZ_1M

#define SPRD_DISPLAY_BASE	SCI_IOMAP(0xd00000)
#define SPRD_DISPLAY_PHYS	0X21000000
#define SPRD_DISPLAY_SIZE	SZ_1M

#define SPRD_NFC_BASE		SCI_IOMAP(0xe00000)
#define SPRD_NFC_PHYS		0X21100000
#define SPRD_NFC_SIZE		SZ_1M

#define SPRD_RTC_BASE		SCI_IOMAP(0xf00000)
#define SPRD_RTC_PHYS		0X41000000
#define SPRD_RTC_SIZE		SZ_1M

#define SPRD_ISP_BASE		SCI_IOMAP(0x1001000)
#define SPRD_ISP_PHYS		0X22000000
#define SPRD_ISP_SIZE		SZ_4K

#define SPRD_GREG_BASE		SCI_IOMAP(0x1001000)
#define SPRD_GREG_PHYS		0X4B000000
#define SPRD_GREG_SIZE		SZ_1M

#define SPRD_PIN_BASE		SCI_IOMAP(0x1500000)
#define SPRD_PIN_PHYS		0X4C000000
#define SPRD_PIN_SIZE		SZ_1M

#define SPRD_EPT_BASE		SCI_IOMAP(0x1601000)
#define SPRD_EPT_PHYS		0X4D000000
#define SPRD_EPT_SIZE		SZ_4K

#define SPRD_CORESIGHT_BASE	SCI_IOMAP(0x1710000)
#define SPRD_CORESIGHT_PHYS	0x10000000
#define SPRD_CORESIGHT_SIZE	SZ_64K

#define SPRD_MALI_BASE		SCI_IOMAP(0x1720000)
#define SPRD_MALI_PHYS		0x10500000
#define SPRD_MALI_SIZE		SZ_64K

#define SPRD_VBC_BASE		SCI_IOMAP(0x1730000)
#define SPRD_VBC_PHYS		0X42003000
#define SPRD_VBC_SIZE		SZ_16K


#define SPRD_I2C0_BASE		SCI_IOMAP(0x1734000)
#define SPRD_I2C0_PHYS		0X46000000
#define SPRD_I2C0_SIZE		SZ_4K

#define SPRD_I2C1_BASE		SCI_IOMAP(0x1724000 + SZ_4K)
#define SPRD_I2C1_PHYS		0X46001000
#define SPRD_I2C1_SIZE		SZ_4K

#define SPRD_I2C2_BASE		SCI_IOMAP(0x1724000 + SZ_8K)
#define SPRD_I2C2_PHYS		0X46002000
#define SPRD_I2C2_SIZE		SZ_4K

#define SPRD_I2C3_BASE		SCI_IOMAP(0x1724000 + SZ_4K + SZ_8K)
#define SPRD_I2C3_PHYS		0X46003000
#define SPRD_I2C3_SIZE		SZ_4K

#define SPRD_A5MP_BASE		SCI_IOMAP(0x1728000)
#define SPRD_A5MP_PHYS		0x10400000
#define SPRD_A5MP_SIZE		SZ_8K

#define SPRD_L2_BASE		SCI_IOMAP(0x172b000)
#define SPRD_L2_PHYS		0x10800000
#define SPRD_L2_SIZE		SZ_4K

#define SPRD_BM0_BASE		SCI_IOMAP(0x172c000)
#define SPRD_BM0_PHYS		0X20400000
#define SPRD_BM0_SIZE		SZ_4K

#define SPRD_BM1_BASE		SCI_IOMAP(0x172d000)
#define SPRD_BM1_PHYS		0X20401000
#define SPRD_BM1_SIZE		SZ_4K

#define SPRD_BM2_BASE		SCI_IOMAP(0x172e000)
#define SPRD_BM2_PHYS		0X20402000
#define SPRD_BM2_SIZE		SZ_4K

#define SPRD_BM3_BASE		SCI_IOMAP(0x172f000)
#define SPRD_BM3_PHYS		0X20403000
#define SPRD_BM3_SIZE		SZ_4K

#define SPRD_BM4_BASE		SCI_IOMAP(0x1730000)
#define SPRD_BM4_PHYS		0X20404000
#define SPRD_BM4_SIZE		SZ_4K

#define SPRD_AXIBM0_BASE	SCI_IOMAP(0x1731000)
#define SPRD_AXIBM0_PHYS	0X20A00000
#define SPRD_AXIBM0_SIZE	SZ_4K

#define SPRD_AXIBM1_BASE	SCI_IOMAP(0x1732000)
#define SPRD_AXIBM1_PHYS	0X20A01000
#define SPRD_AXIBM1_SIZE	SZ_4K

#define SPRD_AXIBM2_BASE	SCI_IOMAP(0x1733000)
#define SPRD_AXIBM2_PHYS	0X20A02000
#define SPRD_AXIBM2_SIZE	SZ_4K

#define SPRD_HWLOCK_BASE	SCI_IOMAP(0x1734000)
#define SPRD_HWLOCK_PHYS	0X20A03000
#define SPRD_HWLOCK_SIZE	SZ_4K

#define SPRD_INTC0_BASE		SCI_IOMAP(0x1735000)
#define SPRD_INTC0_PHYS		0X40003000
#define SPRD_INTC0_SIZE		SZ_8K

#define SPRD_ADI_BASE		SCI_IOMAP(0x1736000)
#define SPRD_ADI_PHYS		0X42000000
#define SPRD_ADI_SIZE		SZ_4K


#define SPRD_UART0_BASE		SCI_IOMAP(0x1737000)
#define SPRD_UART0_PHYS		0X43000000
#define SPRD_UART0_SIZE		SZ_4K

#define SPRD_UART1_BASE		SCI_IOMAP(0x1738000)
#define SPRD_UART1_PHYS		0X44000000
#define SPRD_UART1_SIZE		SZ_4K

#define SPRD_UART2_BASE		SCI_IOMAP(0x1739000)
#define SPRD_UART2_PHYS		0X4E000000
#define SPRD_UART2_SIZE		SZ_4K

#define SPRD_UART3_BASE		SCI_IOMAP(0x173a000)
#define SPRD_UART3_PHYS		0X4E005000
#define SPRD_UART3_SIZE		SZ_4K

#define SPRD_SIM0_BASE		SCI_IOMAP(0x173b000)
#define SPRD_SIM0_PHYS		0X45000000
#define SPRD_SIM0_SIZE		SZ_4K

#define SPRD_SIM1_BASE		SCI_IOMAP(0x173c000)
#define SPRD_SIM1_PHYS		0X45003000
#define SPRD_SIM1_SIZE		SZ_4K

#define SPRD_KPD_BASE		SCI_IOMAP(0x173d000)
#define SPRD_KPD_PHYS		0X47000000
#define SPRD_KPD_SIZE		SZ_4K

#define SPRD_SYSCNT_BASE	SCI_IOMAP(0x173e000)
#define SPRD_SYSCNT_PHYS	0X47003000
#define SPRD_SYSCNT_SIZE	SZ_4K

#define SPRD_PWM_BASE		SCI_IOMAP(0x173f000)
#define SPRD_PWM_PHYS		0X48000000
#define SPRD_PWM_SIZE		SZ_4K

#define SPRD_EFUSE_BASE		SCI_IOMAP(0x1740000)
#define SPRD_EFUSE_PHYS		0X49000000
#define SPRD_EFUSE_SIZE		SZ_4K

#define SPRD_GPIO_BASE		SCI_IOMAP(0x1741000)
#define SPRD_GPIO_PHYS		0X4A000000
#define SPRD_GPIO_SIZE		SZ_4K

#define SPRD_EIC_BASE		SCI_IOMAP(0x1742000)
#define SPRD_EIC_PHYS		0X4A001000
#define SPRD_EIC_SIZE		SZ_4K

#define SPRD_IPI_BASE		SCI_IOMAP(0x1743000)
#define SPRD_IPI_PHYS		0X4A002000
#define SPRD_IPI_SIZE		SZ_4K

#define SPRD_IIS0_BASE		SCI_IOMAP(0x1744000)
#define SPRD_IIS0_PHYS		0X4E001000
#define SPRD_IIS0_SIZE		SZ_4K

#define SPRD_IIS1_BASE		SCI_IOMAP(0x1745000)
#define SPRD_IIS1_PHYS		0X4E004000
#define SPRD_IIS1_SIZE		SZ_4K

#define SPRD_SPI0_BASE		SCI_IOMAP(0x1746000)
#define SPRD_SPI0_PHYS		0X4E002000
#define SPRD_SPI0_SIZE		SZ_4K

#define SPRD_SPI1_BASE		SCI_IOMAP(0x1747000)
#define SPRD_SPI1_PHYS		0X4E003000
#define SPRD_SPI1_SIZE		SZ_4K

#define SPRD_SPI2_BASE		SCI_IOMAP(0x1748000)
#define SPRD_SPI2_PHYS		0X4E006000
#define SPRD_SPI2_SIZE		SZ_4K

#define TIGER_VA_GIC_CPU	(SPRD_A5MP_BASE + 0x100)
#define TIGER_VA_GLOBAL_TIMER   (SPRD_A5MP_BASE + 0x200)
#define TIGER_VA_PRIVATE_TIMER  (SPRD_A5MP_BASE + 0x600)
#define TIGER_VA_GIC_DIS	(SPRD_A5MP_BASE + 0x1000)


#define HOLDING_PEN_VADDR	(SPRD_AHB_BASE + 0x240)
#define CPU0_JUMP_VADDR		(HOLDING_PEN_VADDR + 0x4)
#define CPU1_JUMP_VADDR		(HOLDING_PEN_VADDR + 0X8)
#define WRITE_CPU1_JUM_VDST(X)	do {*(volatile unsigned int*)(CPU1_JUMP_VADDR) = (X);} while(0)



/* registers for watchdog ,RTC, touch panel, aux adc, analog die... */
#define SPRD_MISC_BASE		((unsigned int)SPRD_ADI_BASE)
#define SPRD_MISC_PHYS		((unsigned int)0X42000000)

#define ANA_CTL_GLB_BASE	( SPRD_MISC_BASE + 0x0600 )
#define ANA_REG_GLB_APB_CLK_EN  ( ANA_CTL_GLB_BASE + 0x0000 )

#define ADC_BASE		((unsigned int)SPRD_ADI_BASE + 0x300)

#define CHIP_ID_LOW_REG		(ANA_CTL_GLB_BASE + 0xf8)
#define CHIP_ID_HIGH_REG	(ANA_CTL_GLB_BASE + 0xfc)

#endif