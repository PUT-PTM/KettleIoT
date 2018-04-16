# KettleIoT
## Overview

## Description

## Tools

FT232 USB UART Board (Type A)

ESP8266-01

## How to run

ESP8266-01

<img src="readme-images/ESP8266_pinout.png" width="325"/>

- Pins connection for firmware update.

<table>
  <tr align="center">
    <th>ESP8266-01</th>
    <th>FT232</th>
    <th>STM32F4</th>
  </tr>
  <tr align="center">
    <td>VCC</td>
    <td>VCCIO (3.3V)</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>GND</td>
    <td>GND</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>Rx</td>
    <td>Tx</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>Tx</td>
    <td>Rx</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>RTS</td>
     <td rowspan="2" colspan="2">connection between pins</td>
  </tr>
  <tr align="center">
    <td>CH_PD</td>
  </tr>
  <tr align="center">
    <td>GPIO0</td>
    <td>-</td>
    <td><b>GND</b></td>
  </tr>
  <tr align="center">
    <td>GPIO2</td>
    <td>-</td>
    <td>-</td>
  </tr>
</table>

- Pins connection for tests

<table>
  <tr align="center">
    <th>ESP8266-01</th>
    <th>FT232</th>
    <th>STM32F4</th>
  </tr>
  <tr align="center">
    <td>VCC</td>
    <td>-</td>
    <td>3V</td>
  </tr>
  <tr align="center">
    <td>GND</td>
    <td>-</td>
    <td>GND</td>
  </tr>
  <tr align="center">
    <td>Rx</td>
    <td>-</td>
    <td>PC10 (Tx)</td>
  </tr>
  <tr align="center">
    <td>Tx</td>
    <td>Rx</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>RTS</td>
    <td rowspan="2" colspan="2">connection between pins</td>
  </tr>
  <tr align="center">
    <td>CH_PD</td>
  </tr>
  <tr align="center">
    <td>GPIO0</td>
    <td>-</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>GPIO2</td>
    <td>-</td>
    <td>-</td>
  </tr>
</table>

- Pins connection in project

<table>
  <tr align="center">
    <th>ESP8266-01</th>
    <th>STM32F4</th>
  </tr>
  <tr align="center">
    <td>VCC</td>
    <td>3V</td>
  </tr>
  <tr align="center">
    <td>GND</td>
    <td>GND</td>
  </tr>
  <tr align="center">
    <td>Rx</td>
    <td>PC10 (Tx)</td>
  </tr>
  <tr align="center">
    <td>Tx</td>
    <td>PC11 (Rx)</td>
  </tr>
  <tr align="center">
    <td>RTS</td>
    <td rowspan="2">connection between pins</td>
  </tr>
  <tr align="center">
    <td>CH_PD</td>
  </tr>
  <tr align="center">
    <td>GPIO0</td>
    <td>-</td>
  </tr>
  <tr align="center">
    <td>GPIO2</td>
    <td>-</td>
  </tr>
</table>

## How to compile
- System Workbench for STM32
## Future improvements

## Attributions

## License
Distributed under **MIT** license
## Credits

- [Marcin Borzymowski](https://github.com/BMarcin) 
- [Adam Chrzanowski](https://github.com/chradam)

*The project was conducted during the Microprocessor Lab course held by the Institute of Control and Information Engineering, Poznan University of Technology.
Supervisor: [`Tomasz Mańkowski`](https://github.com/Tomasz-Mankowski)*
