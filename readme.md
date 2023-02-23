# SlimARM Boards

The project is aiming to manufacture custom-made boards of ARM processors(specially-designed for specified usage, slim in dimension).<br>

Author: jlywxy(jlywxy@outlook.com)<br>
Document Version: 0.4<br>

- --

## Project Status
[ok]SlimARM Classic (Samsung S3C2410AL)<br>
[..]SlimARM Zero (AllWinner A20/Rockchip RK3128)<br>
[..]SlimARM Fusion (Xilinx XC7Z010)<br>

* Note: [ok] means work done, [..] means work doing, [  ] means work firstlly created.

- --

## Board Specification

* Note 1: see each board design in their directories when board design is done.<br>
* Note 2: all board are designed with proper PCB constraints, even SDR SDRAMs are tuned in length.<br>
<br>
* SlimARM Classic<br>
A board with minimum ARM requirements with only USB Device Port extended.<br>
This board is pointing to low cost, replacing the legacy project 'us3c ultra'.<br>
Current cost: 24 RMB approx. (S3C2410: 9, DRAM: 2, NAND: 4, PCB: 6, LDO/Caps/R/Xtals/...: 3)

* SlimARM Zero<br>
A board with minimum ARM requirements with USB, SDIO and Wi-Fi. <br>
This is specified for "On-The-Go" Linux experience similar to the RaspberryPi.<br>

* SlimARM Fusion<br>
The board for Linux and calculation acceleration combination usage, the PL part of Zynq 7000s is also fine for display and video processor. It is especially designed for low cost and convenience, picking up only xc7z010 and ft2232hl on board.

