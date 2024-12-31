# FUCKBALL

This trackball is a modern twist on [Brickbots' aball](https://github.com/brickbots/aball) with a lot of inspiration from the [Ploopy Adept](https://github.com/ploopyco/adept-trackball). 

The biggest changes are:

- Built to use PMW3360 / PMW3389 breakout boards
- RP2040-Zero Board to keep things small and modern
- Footprint designed to sit alongside [Sofle v2](https://github.com/josefadamcik/SofleKeyboard) on either side

## What's the point?

I really like the simplicity of the aball design, but found its quirks kind of irritating to build. Elite-C boards aren't cheap compared to the thousands of nano boards on the market, and handwiring tiny tiny cables leaves a lot of room for error. I felt like there wasn't a great option for a buttonless trackball with a high precision sensor; the Ploopy nano is solidly entry-level, and nicer options like the Ploopy Adept are comparitively big and bulky. I think this strikes a nice balance.

## Why the breakout board and not sensor only? 

At the time of writing (December 2024), the cost difference between just a PMW3389 sensor and the sensor + breakout board with presoldered pins is just a few bucks; it's cheaper to buy the board than to get a custom PCB with assembly like the [Jfedor2 RP2040 + PMW3360 board](https://github.com/jfedor2/rp2040-pmw3360).

## License etc.

GPLv3!

## Sources and Inspiration

[Aball](https://github.com/brickbots/aball)
[Ploopy Adept](https://github.com/ploopyco/adept-trackball))
[Sofle](https://github.com/josefadamcik/SofleKeyboard)
[RP2040+PMW3360](https://github.com/jfedor2/rp2040-pmw3360)
