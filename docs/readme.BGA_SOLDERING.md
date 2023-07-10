# Small BGA chips Hand-Soldering Guide


The following guide is tested to be the most effective to solder BGA chips manually (using heat-gun and stencil) without expensive equipments.<br>
<br>
Version: v2r1x2c7<br>
Author: jlywxy(jlywxy@outlook.com)<br>
License: GPLv2<br>
- --

## For new pre-balled BGA chips
Intention: Make a new BGA chips onto a new PCB.<br><br>
Prerequisites: a heat gun, soldering flux, washwater, cotton bar

Step|TODO|Effect|Comment
-|-|-|-
1|Apply flux to balls on the pad side of the BGA chip|The flux evenly applied on the chip|<b>This have to be done using cotton bar. </b>
2|Blow at 310°C using heat gun|Balls all melted and shining|
3|Wash the flux away using washwater|Balls and chip are cleaned|optional
4|Wash the board with weak acid liquid (e.g. vinegar), and wash away with water, dry up the board.|The oxide layer should be cleaned|This step should be skipped when working on boards which pads are processed with electrolytic gold. <br><b>This is mandatory for boards which pads are covered with tin and not used immediately after pcb manufactured.</b>
5|Apply flux to the footprint on PCB|A Thin layer of flux is applied to the PCB|<b>This have to be done using cotton bar. </b>
6|Put the chip onto PCB|The chip direction is correct and exactly in the dimension of silkscreen|
7|Blow more than 350°C using heat gun for 30 secs at least.Then, when the flux are melted, use twizzer to slightly touch the chip||DO NOT push the chip, only "Silk Touch"; If the chip is able to move by the twizzer, this step succeed.
8|Cool down for at least 2 minutes|The board are not hot to touch|

## For used BGA chips or PCB BGA reworking
Intention: Get the on-board BGA chips off, then transfer it to a new PCB; Solder the chip again on existing board to prevent soldering problem.<br><br>
Prerequisites: <br>
(1) BGA Tools: <br>
heat gun, BGA hard-steel(direct-heat) stencil, BGA soldering balls <br>
(2) Generic Soldering Tools: <br>
soldering flux, washwater, good-quality solder wick, cotton bar<br>

Step|TODO|Effect|Comment
-|-|-|-
1|Apply flux at the edge of chip, blow at 350°C using heat gun|The chip are able to be removed|
2|use solderwick to clean the chip|all pads are flat without any remaining soldering tin|
3|use solderwick to clean the footprint on PCB|all pads are flat without any remaining soldering tin|The board has to be cooled down; DO NOT push too hard on the solderwick(or the soldermask will be peeled); all pads are flat without any remaining soldering tin|
4|Wash the flux away using washwater, applied to chip and PCB|PCB and chip are cleaned|mandatory
5|BGA re-balling: <br>jump to `BGA re-balling` Step 1||
11|BGA chip soldering: <br>jump to `For new pre-balled BGA chips` Step 5||

## BGA re-balling
Intention: Make the ball onto a used BGA chip that have no balls and cleaned.<br>
Note: for 0.8-pitch BGA grid, use 0.45mm balls; for 0.65-pitch, use 0.35mm balls, if the chip do not declared explicitly.
<br><br>

Step|TODO|Effect|Comment
-|-|-|-
1|Apply a thin layer of flux onto the chip|The flux evenly applied on the chip|optional before step 5. If this step not be done, it have to be done right after step 5(before removing the stencil).<br><b>This have to be done using cotton bar. </b>
2|Put the stencil on the chip|make holes exactly matched to every pad on the chip|
3|Put BGA soldering tin balls into every holes that matched the pads on the chip|Make sure every pad has it ball
4|Blow at 310°C using heat gun directly on the stencil|All balls are melted and attached to every pad. |If the stencil is twisting of the heat, use a direct-heat stencil
5|Let the stencil cool down, remove the stencil||A blow of mouth is ok for cooling down; If the stencil is hard to remove, wash the stencil using washwater or slightly blow the stencil using heatgun.
6|Check if any balls are not attached to the pad. ||If any ball missing, put balls onto those pads manually and blow at minimum air speed