# SlimARM Boards

The project is aiming to manufacture custom-made boards of ARM processors(specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
Document Version: 0.5<br>

- --

## Project Status
```
[ok]SlimARM Classic
----[ok]SlimARM Classic 2410
----[stall]SlimARM Classic 2416
[..]SlimARM Zero
----[..]SlimARM Zero AllWinner A20
----[  ]SlimARM Zero RK3368
[  ]SlimARM Fusion Zynq
```
Note: [..] means work doing.

- --

## Board Specification

* Note 1: see each board design in their directories when board design is done.<br>
* Note 2: all board are designed with proper PCB constraints, even SDR SDRAMs are tuned in length.<br>
* Note 3: for some boards using DDR3, KiCad may also be used for design without proper simulation like Altium/Cadence provided. The design will almost comply to the sigrity stuffs (constraints, impedance) as able when routing to reduce the factor of lack of simulation.
<br>
<br>
<br>
Boards:
* SlimARM Zero<br>
CPU <b>AllWinner A20/Rockchip RK3368</b><br>
A board with minimum ARM requirements with USB, SDIO and Wi-Fi. <br>
This is specified for "On-The-Go" Linux experience similar to the RaspberryPi.<br>

* SlimARM Fusion<br>
CPU <b>Xilinx XC7Z010-1CLG400</b><br>
The board for Linux and calculation acceleration combination usage, the PL part of Zynq 7000s is also fine for LCD display and video processor. It is especially designed for low cost and convenience, picking up only xc7z010 and ft2232hl on board.

* SlimARM Classic (EOL)<br>
CPU <b>Samsung S3C2410AL/S3C2416XH</b><br>
A board with minimum ARM requirements with only USB Device Port extended.<br>
This board is pointing to low cost, replacing the legacy project 'us3c ultra'.<br>
Current cost for SlimARM Classic 2410: 24 RMB approx. (S3C2410: 9, DRAM: 2, NAND: 4, PCB: 6, LDO/Caps/R/Xtals/...: 3 approx.)<br>
<b>Note: This part is EOL and not suitable for new design/manufacture.</b><br>

- --
## Misc
### Board Part-of-Project,SubPart-of-Project to Board-Part-Number maps

Part of Project|Sub Part of Project|Board Part Number
-|-|-
SlimARM Classic|SlimARM Classic 2410|slarm_cls_2410
||SlimARM Classic 2416|slarm_cls_2416
SlimARM Zero|SlimARM Zero AllWinner A20|slarm_z_awa20
||SlimARM Zero RK3368|slarm_z_3368
SlimARM Fusion|SlimARM Fusion Zynq|slarm_f_7z010

---
### Document Patch and Errata
* Changed project plan: SlimARM Zero has changed its CPU from RK3128 to RK3368, which has 0.8mm-pitch BGA for low-cost PCB manufactuing.
* Marked slimarm classic 2410 workaround state.
* Paused the process of part "slimarm classic 2416" due to PCB manufacturing problem taken by 0.65mm-pitch BGA design.<br>

patch above: jlywxy@2023.3.11<br>
