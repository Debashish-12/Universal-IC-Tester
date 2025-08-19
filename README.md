# Universal IC Tester for Analog and Digital ICs

This project is a **Universal IC Tester** built using an Arduino Uno, designed to test both **digital ICs** (7400 series logic gates) and **analog ICs** (like LM741 Op-Amp).  
The tester checks the functionality of the inserted IC and indicates whether it is working correctly. It is useful for **education, R&D, and troubleshooting**.

---

## Features
- Tests both **digital ICs** (NAND, NOR, AND, OR, EX-OR, EX-NOR) and **analog ICs** (LM741 Op-Amp, BJT, JFET).
- Identifies whether an IC is working or faulty.
- Provides **LED indication** for quick status feedback.
- Displays results on the **Serial Monitor**.
- Portable, low-cost, and beginner-friendly.

---

## Components Used
- Arduino Uno  
- Breadboard & jumper wires  
- Resistors  
- LEDs (Red, Green)  
- Digital ICs (7400 NAND, 7402 NOR, 7408 AND, 7432 OR, 7486 EX-OR, 747266 EX-NOR)  
- LM741 Operational Amplifier (Op-Amp)

---

## Working Principle
- For **digital ICs**: The Arduino provides input combinations, reads the outputs, and compares them against the truth table.  
- For **analog ICs (Op-Amp)**: The output voltage is measured and validated against expected values.  
- If the IC works correctly, the LED indicator lights up and results are shown on the Serial Monitor.

---

## Implementation
1. Connect IC inputs and outputs to the Arduino pins as per the schematic.
2. Upload the Arduino code from this repository.
3. Insert the IC to be tested.
4. Observe LED indications and Serial Monitor output for the test result.

---

## Applications
- Educational tool for learning about logic gates and op-amps.
- IC validation in **R&D labs**.
- Quick testing and debugging in engineering projects.

---

## Limitations
- Currently supports a limited set of ICs (listed above).
- Can only test **one gate per IC** — assumes if one gate works, the IC works.

---


