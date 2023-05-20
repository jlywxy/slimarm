# SlimARM Boards

The project is aiming to manufacture custom-made PCBA boards of Embedded MPUs(most having ARM cores; specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
License: GPLv2<br>

- --

## Board List (Subproject Status)

*Note: Most of the boards are designed using KiCad.

Working Boards:
Series|Code|Chipset|Core,Clock|DRAM|Status
-|-|-|-|-|-
SlimARM Classic|Almond Mini|[Samsung S3C2410A]|1x ARM920T,200MHz|133MHz SDR|done(post-test)
SlimARM Classic|Carambola|[Atmel AT91SAM9G25]|1x ARM926EJ-S,400MHz|133MHz DDR2|pcb-test
SlimARM|Apricot|[Samsung S3C2416X]|1x ARM926EJ-S,400MHz|133MHz DDR2|pre-pcb

Planning Boards: 
Series|Code|Chipset|Core,Clock|DRAM|Status
-|-|-|-|-|-
SlimARM|Loquat|Rockchip RK3188|4x Cortex A9,1.1GHz|400MHz DDR3|planning
SlimMIPS|Cumquat|[MediaTek MT7620A]|1x MIPS24KEc,600MHz|192MHz DDR2|planning

*Note 1: Chip `S3C2416X` and `MT7620A` have BGA package with ball pitch of 0.65mm.<br>
*Note 2: `SlimMIPS` is actually a series of boards based on MIPS CPUs.<br>
*Note 3: `Almond Mini`(S3C2410A)/`Carambola`(AT91SAM9G25)/`Loquat`(RK3188)/`Cumquat`(MT7620) chipsets have official u-boot / linux kernel support without transplanting new configurations.<br>
*Note 4: `Apricot`(S3C2416X) will only iterate once; this is the only board designed using LCEDA and ported to OSHWHUB.<br>
`Loquat`(RK3188) is the only board using Cadence(OrCad/Allegro) board.<br>
*Note 5: `Cumquat`(MT7620) board has built-in RF circuits for Wi-Fi antenna.<br>
*Note 6: Chipset name with "[]" sign indicated actual chip component in inventory for instant hardware debugging.

Discarded Plans / Work Further: 
Series|Code|Chipset|Core,Clock|DRAM|Status
-|-|-|-|-|-
SlimARM|-|[Xilinx XC7Z010]|2x Cortex-A9,667MHz; Artix|1333MHz DDR3|postponed(not planned)
SlimARM |-|[Allwinner A20]|2x Cortex-A7,1.2GHz|400MHz DDR3|postponed(not critical/not economic)
SlimARM|-|[Allwinner F1C200s]|1x ARM926EJ-S,400MHz|(built-in)|cancelled(not critical)
-|-|Rockchip RK3368|8x Cortex-A53,2.2GHz|1600MHz DDR3|discarded(cost overflowed/not economic)
-|-|Samsung S5PV210|1x Cortex-A8,1GHz|200MHz DDR3|discarded(cost overflowed/not economic)

Alternative code names:
Acerola,
Natsume,
Ringo,
Momo

- --
## Lastest Information
* `Carambola`(AT91SAM9G25) the second version of hardware released and under test. Note: The first version failed for the wrong tuning of DDR lines. @ 2022.5.14
* `Apricot`(S3C2416) hardware final design finished with version/revision `v1r0x205`, the software for this board is under development @ 2022.5.17
* `Almond Mini`(S3C2410) hardware final design finished with version/revision `v1r1x208` @ 2022.5.20

