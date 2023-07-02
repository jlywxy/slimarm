# SY8089 DC-DC Voltage Reference Resistor Selection Table

SlimARM boards use SY8089 for most large current power supply situations.<br>
This document is a recommendation on resistor selection.
<br>
<br>
Version: v1r0x2be<br>
Author: jlywxy(jlywxy@outlook.com)<br>
License: GPLv2<br>

- --

## Selection Table

Expected<br>Voltage | Real<br>Voltage | RL | RH | Common<br>Usage
-|-|-|-|-
1.0 v | 1.0 v | 51 kΩ | 75 kΩ | ARM core
1.2 v | 1.2 v | 51 kΩ | 51 kΩ | ARM core / PLL /<br> USB / DDR4
1.3 v | 1.32 v | 75 kΩ | 62 kΩ | ARM core
1.5 v | 1.55 v | 75 kΩ | 47 kΩ | DDR3
1.8 v | 1.875 v | 51 kΩ | 24 kΩ | DDR2
2.5 v | 2.475 v | 75 kΩ | 24 kΩ | SATA
3.3 v | 3.42 v | 47 kΩ | 10 kΩ | GPIO

The selection table use the following values of resistors: <br>
10k, 24k, 47k, 51k, 62k, 75k.

The following table is showing selection not recommended.(stock for such value of resistors are not available/unable to reuse value of resistors above)

Expected<br>Voltage | Real<br>Voltage | RL | RH | Common<br>Usage
-|-|-|-|-
1.35 v | 1.35 v | 75 kΩ | 60 kΩ | DDR3L
3.3 v | 3.327 v | 10 kΩ | 2.2 kΩ | GPIO

- --

## Calculation and Verification

The following code is for voltage calculation and verification, based on SY8089 docs. If other voltage values are needed, use these codes.
```python
# (written in python)

# Calculate RH from RL
def rh (rl, vout):
	return 0.6 / (vout - 0.6) * rl

# Calculate Output Voltage from RH and RL
def vout (rl, rh):
	return 0.6 * rl / rh + 0.6
```