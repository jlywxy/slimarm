# SlimARM Boards

The project is aiming to manufacture custom-made PCB of Embedded MPUs(most having ARM cores; specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
License: GPLv2<br>

- --

## Board List (Subproject Status)

Working Boards:
Series|Code|Chipset|Core,Clock|DRAM|EDA|Status
-|-|-|-|-|-|-
SlimARM Classic|Almond Mini|[Samsung S3C2410]|1x ARM920T,200MHz|133MHz SDR|KiCAD|done(post-test)
SlimARM|Apricot|[Samsung S3C2416X]|1x ARM926EJ-S,400MHz|266MHz DDR2|LCEDA|pcb-test
SlimARM Classic|Carambola|[Atmel AT91SAM9G25]|1x ARM926EJ-S,400MHz|133MHz DDR2|KiCAD|stalled(pcb-test)

Planning Boards: 
Series|Code|Chipset|Core,Clock|DRAM|EDA|Status
-|-|-|-|-|-|-
SlimMIPS|Cumquat|[MediaTek MT7620A]|1x MIPS24KEc,600MHz|192MHz DDR2|Cadence|planning
SlimARM|Oxalis Mini|[Allwinner A20]|2x Cortex-A7,1.2GHz|432MHz DDR3|Cadence|planning

<br>

Discarded Plans / Work Further: 
Series|Chipset|Core,Clock|DRAM|Status
-|-|-|-|-
SlimARM|[Xilinx XC7Z010]|2x Cortex-A9,667MHz; Artix|1333MHz DDR3|postponed(not planned)
SlimARM|[Allwinner F1C200s]|1x ARM926EJ-S,400MHz|(built-in)|cancelled(not critical)

Alternative code names:
<br>
*For ARM9/ARM11/MIPS SoCs:
Acerola,
Loquat,
<br>
*For Cortex-A/FPGA SoCs:
Anemone,
Clematis,


- --
## Lastest Information
(this column started tracking from 2023.5.14)
* `Carambola`(AT91SAM9G25) the second version of hardware released and under test. Note: The first version failed for the wrong tuning of DDR lines. @ 2023.5.14
* `Apricot`(S3C2416) hardware final design finished with version/revision `v1r0x205`, the software for this board is under development @ 2023.5.17
* `Almond Mini`(S3C2410) hardware final design finished with version/revision `v1r1x208` @ 2023.5.20
* `Carambola` turning into a stall state for the unclear DDR2 initialization procedures of atmel mpus. @ 2023.5.26
* `Apricot` pushed new hardware version v1r1, which fixed UDEV clock input line and added pad teardrops. @ 2023.5.27
* added new plan for `Oxalis Mini` @ 2023.5.27

