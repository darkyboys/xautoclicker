# XAutoClicker

**XAutoClicker** is a simple, open-source auto clicker written in C++ that runs on **X11** to simulate mouse left-clicks using the XTest extension.

⚠️ **Disclaimer:**  
This project is intended **only for educational purposes** or harmless local pranks.  
**Do not use this in multiplayer games** — it may be considered cheating and could result in bans.  
You are fully responsible for any outcomes caused by this software.

---

## 🚀 Install

Make sure you have:
- The **GCC** compiler installed
- The [**magma** build system](https://github.com/darkyboys/magma)

Then run:

```bash
git clone https://github.com/darkyboys/xautoclicker/
cd xautoclicker
magma
````

---

## 🖱️ Usage

After building, run the clicker like so:

```bash
./bin/autoclicker
```

* **Default CPS** is `100` — this can be dangerous! It clicks *everywhere*, extremely fast.
* To change CPS, edit the `cps` variable in `main.cc` and recompile using `magma`.

To stop the clicker, press `Ctrl + C` in your terminal.

---

## ⚠️ Warning

This tool is powerful. Misuse can cause unintended clicks that may:

* Change system settings
* Click on sensitive areas
* Cause chaos if left running

Please use responsibly.
**Don't blame the developer — you are responsible for your own usage.**

---

Happy (safe) clicking! 😄
