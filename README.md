# ESP32-Access-Point-Web-Server
Create a Local Wi-Fi Network &amp; Host a Webpage Using ESP32

<p align="center">
  <img src="https://img.shields.io/badge/Platform-ESP32-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Language-C++-brightgreen?style=for-the-badge">
  <img src="https://img.shields.io/badge/Framework-Arduino%20Core-orange?style=for-the-badge">
</p>

## 📌 Overview  
This project demonstrates how to build a **standalone IoT Wi-Fi Access Point** using the ESP32.  
Once powered on, the ESP32 creates its own Wi-Fi network. Any device can connect to it and access a built-in **HTTP Web Server** without the need for an external router.

The server responds with a simple HTML page displaying:

> **"Welcome to The deepest point of Ocean Blue Whales!"**

This makes it ideal for:
- IoT offline dashboards  
- Device provisioning  
- Local control systems  
- Educational microcontroller projects  

---

## 🚀 Features
✔️ ESP32 creates its own Wi-Fi Access Point  
✔️ Built-in HTTP Web Server (Port 80)  
✔️ Custom HTML Webpage Response  
✔️ No external Wi-Fi router required  
✔️ Supports phones, laptops, and tablets  

---

## 🛠️ Hardware Requirements  
| Component | Description |
|----------|-------------|
| ESP32 Dev Module | Any version (WROOM/WROVER) |
| USB Cable | For powering and programming |
| Computer | Running Arduino IDE or PlatformIO |

---

## 📡 Wi-Fi Access Point Configuration  
| Parameter | Value |
|----------|--------|
| SSID | **ESP32-Test** |
| Password | **12345678** |
| Default IP | **192.168.4.1** |

---

## 📲 How It Works  
1. The ESP32 powers up and launches a Wi-Fi hotspot  
2. It starts an HTTP web server  
3. A client (phone/laptop) connects to the network  
4. When the browser visits **http://192.168.4.1**, the ESP32 responds with a custom HTML page  

---
🖥️ Serial Monitor Output
Access Point Started!
IP Address: 192.168.4.1
Client Connected
GET / HTTP/1.1
Client Disconnected
🚀 How to Run

Install ESP32 boards in Arduino IDE

Select your board:
Tools → Board → ESP32 Dev Module

Upload the code

Connect using your phone/laptop:

SSID: ESP32-Test

Password: 12345678

Open your browser and visit:
👉 http://192.168.4.1

🔮 Future Enhancements

Add LED control buttons

Add JSON API endpoints

Add full dashboard UI

Add real-world sensors

👨‍💻 Author

Mohamed EL-Halmoushy
ESP32 | IoT | Embedded Systems
