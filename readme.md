# SlimARM Boards

The project is aiming to manufacture custom-made PCB of Embedded MPUs(most having ARM cores; specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
License: GPLv2<br>

- --

## Board List

<b>Important:</b><br>
Check `board/readme.PCB_DESIGN_STATUS.md` before actual PCB manufacture process. <br>Use verified boards only.
<br>
<br>
Status of Working Boards:
Code|Chipset|Core<br>DRAM Clock|PCB Stack<br>EDA|Status
-|-|-|-|-
Hypericum|Allwinner A20|1.2GHz 2x Cortex-A7<br>400MHz(800Mbps) DDR3|4-layer<br>KiCad|✅final-pcb
Carambola|Atmel AT91SAM9G25|400MHz ARM926EJ-S<br>133MHz(266Mbps) DDR2|4-layer<br>KiCad|✅final-pcb
Apricot B|Samsung S3C2416X|400MHz ARM926EJ-S<br>133MHz(266Mbps) DDR2|4-layer<br>LCEDA|pcb-revision
Almond B|Samsung S3C2410|200MHz ARM920T<br>133MHz SDR|4-layer<br>KiCAD|pcb-revision
||||
Azalea|Rockchip RK3128|1.1GHz 4x Cortex-A7<br>533MHz(1066Mbps)DDR3|4-layer<br>Cadence|pre-sch
Clematis|Rockchip RK3188|1.1GHz 4x Cortex-A9<br>533MHz(1066Mbps)DDR3|4-layer<br>KiCad|pre-sch
|Cumquat<br>(*SlimMIPS)|MediaTek MT7620A|580MHz MIPS24KEc<br>192MHz(384Mbps) DDR2|4-layer<br>KiCAD & Cadence(two versions)|pre-sch

Project Pipeline: planning -> avail-analyse -> pre-sch -> pcb-fab-test(1-stage pcb) -> software-test  -> post-sch -> pcb-revision -> post-pcb-fab-test -> final-pcb -> post-software-test -> done

- --
## Lastest Information
(this column started tracking from 2023.5.14)
* `Carambola`(AT91SAM9G25) the second version of hardware released and under test. Note: The first version failed for the wrong tuning of DDR lines. @ 2023.5.14
* `Apricot`(S3C2416) hardware final design finished with version/revision `v1r0x205`, the software for this board is under development @ 2023.5.17
* `Almond Mini`(S3C2410) hardware final design finished with version/revision `v1r1x208` @ 2023.5.20
* `Carambola` turning into a stall state for the unclear DDR2 initialization procedures of atmel mpus. @ 2023.5.26
* `Apricot` pushed new hardware version v1r1, which fixed UDEV clock input line and added pad teardrops. @ 2023.5.27
* added new plan for `Oxalis Mini` @ 2023.5.27
* cut down project plan with existing working plan. @ 2023.5.28
* `Apricot`(S3C2416) hardware debug is done, DDR2 initialization is ok. Starting USB 2.0 HS and Linux software debug. @ 2023.6.2
* corrected `Apricot` ddr clock information in project progress chart to 133 MHz. @ 2023.6.2
* dropped `Carambola`; starting `Oxalis Mini` schematic design. @ 2023.6.4
* revisioning `Carambola`; starting `Hypericum`. @ 2023.6.24
* `Hypericum`(a alias of `Oxalis Mini`)(Allwinner-A20) first board test done, revisioning; `Apricot`(S3C2416) third board(v1r3) test done, revisioning; `Carambola` board under test. @ 2023.7.2
* Fixed SDIO pull-up problem for `Hypericum`, `Carambola`, `Apricot` boards. @ 2023.7.11
* `Carambola` newest board tested done; needed to roll back to version that did not pulled up at SDIO, SAM9G25 have internal pull-up for SDIO.  @ 2023.7.15
* `Carambola`, `Hypericum` fixed with reset chip, SDIO pull-ups, ExtIO layout. These versions are verified and committed. @2023.7.22

## Misc
1. the version identifier on silkscreen of boards:<br>
(1)`v1r2e3` means version 1, revision 2, edition 3.<br>
typically written in `version 1.1.1`.<br>
(2)`v1r2x202` means version 1, revision 2, date May 14th.<br>
typically written in `version 1.1, 5.14`.<br>
these types of version identifiers are all used among boards.
