# SlimARM Apricot

This part of the project "SlimARM" is making "minimum" (small-dimension and low-cost) S3C2416X ARM9 processor and Linux development board.

- --

## Overclocking Test

1. HCLK(DDRCLK/2) is ok for maximum below 200 MHz. <br>
However, clock over 200 MHz is not available, since DDR2 CAS=3 supports maximum 200 MHz(5 ns). This is known in all DDR2 devices which supports CAS=3. <br>
When DDRCLK=400 MHz, clock for SDCK pin is 200 MHz, DDR2 runs at 400 Mbps.

- --

## Circuit Troubleshooting History

1. Crystal not work when power on.<br>
<i>throwed at board version v1r0x205</i><br>
<b>caused by:</b><br>
(1)UDEV clock/crystal; input mistakenly connected to Main crystal input, causing crystal not working.<br>
(2)Bypass capacitors malformed(wrong value, bad quality, etc)
<b>solution:</b><br>
(1)reconnect UDEV clock input to CLKOUT.<br>
(2)for 12MHz crystal device, make sure caps are 22pF; if no available cap is found, remove caps for testing.

2. PLL cannot run stable over 250MHz.<br>
<i>throwed at board version v1r0x205</i><br>
<b>caused by:</b><br>
1.3v CPU core LDO output drained.<br>
<b>solution:</b><br>
add second LDO for 1.3v CPU, connect to 3.3v LDO output to reduce heat(reduce voltage drop); or use buck DC-DC instead.
