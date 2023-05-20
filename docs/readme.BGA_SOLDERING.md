# BGA chips Soldering Guide


The most of SlimARM boards are using CPUs in BGA package.<br> 
From the experience of hardware debugging, 
the soldering of BGA is the most important step of making boards.<br>
The following guide is tested to be the most effective and convenient to solder BGA chips manually without expensive equipments.<br>
<br>
Version: v1r0x1fe<br>
Author: jlywxy(jlywxy@outlook.com)<br>
License: GPLv2<br>
- --

## For new pre-balled BGA chips
Prerequisites: a heat gun, soldering flux, washwater

Step|TODO|Effect|Comment
-|-|-|-
1|Apply flux to balls on the pad|The flux evenly applied on the chip|
2|Blow at 310°C using heat gun|Balls all melted and shining|
3|Wash the flux away using washwater|Balls and chip are cleaned|optional
4|Apply flux to the footprint on PCB|A Thin layer of flux is applied to the PCB|
5|Put the chip onto PCB|The chip direction is correct and exactly in the dimension of silkscreen|If the silkscreen on the board is skewing a bit, slightly modify the relative position of chip and silkscreen
6|Blow at 350°C using heat gun for 30 secs at least.Then, when the flux are melted, use twizzer to slightly touch the chip||DO NOT push the chip, only "Silk Touch"; If the chip is able to move by the twizzer, this step succeed.
7|Cool down for at least 2 minutes|The board are not hot to touch|

## For used BGA chips or PCB BGA reworking
Prerequisites: <br>
(1) BGA Tools: <br>
heat gun, BGA hard-steel(direct-heat) stencil(hole 0.5mm), BGA soldering <br>balls(0.45mm) <br>
(2) Generic Soldering Tools: <br>
soldering flux, washwater, good-quality solder wick.<br>

Step|TODO|Effect|Comment
-|-|-|-
1|Apply flux at the edge of chip, blow at 350°C using heat gun|The chip are able to be removed|
2|use solderwick to clean the chip|all pads are flat without any remaining soldering tin|
3|use solderwick to clean the footprint on PCB|all pads are flat without any remaining soldering tin|The board has to be cooled down; DO NOT push too hard on the solderwick(or the soldermask will be peeled); all pads are flat without any remaining soldering tin|
4|Wash the flux away using washwater, applied to chip and PCB|PCB and chip are cleaned|mandatory
5|BGA re-balling: <br>jump to `BGA re-balling` Step 1||
11|BGA chip soldering: <br>jump to `For new pre-balled BGA chips` Step 4||

## BGA re-balling

Step|TODO|Effect|Comment
-|-|-|-
1|Apply a thin layer of flux onto the chip|The flux evenly applied on the chip|
2|Put the stencil on the chip|make holes exactly matched to every pad on the chip|
3|Put BGA soldering tin balls into every holes that matched the pads on the chip|Make sure every pad has it ball
4|Blow at 310°C using heat gun directly on the stencil|All balls are melted and attached to every pad. |If the stencil is twisting of the heat, use a direct-heat stencil
5|Let the stencil cool down, remove the stencil||A blow of mouth is ok for cooling down; If the stencil is hard to remove, wash the stencil using washwater or slightly blow the stencil using heatgun.
6|Check if any balls are not attached to the pad. ||If any ball missing, put balls onto those pads manually and blow at minimum air speed