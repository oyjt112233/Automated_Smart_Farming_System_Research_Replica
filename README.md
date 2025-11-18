# Automated Smart Farming System: Research-Replica

> ioT-based automated smart farming system: replication and enhancement of an existing research paper, implemented as part of our university Mini Research Project, completed in 2024.

> Tasks of that project includes selecting a quality research paper, understand it, reproduce its results, and present your work at the end of the semester.

> The following documentation highlights the exsiting paper detalis, what I implemented and what I modified from the original design.


### *Replication & Enhancement of an Existing Research Paper*

Developed as part of the Mini Research Project (EN5903) under the guidance of Dr. Samiru Gayan at University of Moratuwa.

The project is a **reproduction and enhancement** of the ioT-based smart farming system proposed in a research paper by **Mobasshir Mahbub (2019)**, whose code was published under the **MIT License**.  

This repository includes my rework, improvements, circuit implementation, and ioT dashboard.

---

# 📌 **About the Original Research Paper**

The selected research paper presents a complete **IoT-based Automated Smart Farming System**, addressing smart agriculture challenges such as real-time monitoring, automation, and efficient resource use.

### **Environmental Conditions Monitored**
- Temperature  
- Humidity  
- Air Pressure  
- Rainfall  
- Soil Moisture  
- pH Level  
- CO₂ Concentration  
- Motion (PIR)  

### **Problems Addressed**
- Growing population → increasing food demand  
- Unpredictable climate factors affecting crops  
- Traditional farming challenges (watering, fertilizing, pest control)  
- Labour inefficiency  

### **Proposed Solutions**
- IoT-based monitoring + automated alerts  
- Agri-copters (quadcopters) for precise spraying  
- Automatic fertilizer dispensing based on soil pH  
- Cloud server for logging & visualization  
- Off-grid solar-powered system  
- Agribots for weeding & planting tasks  

---

# 📌 **What I Implemented (My Work)**

I **recreated**, **combined**, and **improved** the circuits from the paper while building a practical version of the environmental monitoring system.

### ✔ **Key Implemented Features**
- Merged **transmitter** and **receiver** circuits into a single unified system  
- Integrated all major sensors from the paper  
- Established communication between **Arduino Mega 2560** and **ESP8266 Wi-Fi module**  
- Uploaded real-time data to an IoT platform  

### ✔ **My Improvements / Added Features**
- **Automatic Irrigation System** using a **5V water pump**  
  - Activates when soil moisture is low or no rainfall is detected  
- **Automatic Cooling System**  
  - DC motor + propeller activates when temperature exceeds threshold  
- **Motion Alert System** using a buzzer  
- Redesigned & modified the **original MIT-licensed code**  
- Improved response logic and reliability  
- Enhanced real-time automation and sensor data handling  

---

# 🔧 **Components Used**
| Component | Function |
|----------|----------|
| Arduino Mega 2560 Rev3 | Main controller |
| ESP8266 Wi-Fi Module | Cloud / IoT communication |
| DHT11 Sensor | Temperature & humidity |
| PIR Motion Sensor | Motion detection |
| MQ-135 Sensor | CO₂ / air quality |
| BMP180 Sensor | Pressure |
| Rainfall Sensor | Rain detection |
| Soil Moisture Sensor | Irrigation triggers |
| Piezo Buzzer | Motion alerts |
| DC Motor + Propeller | Environment cooling |
| 5V Water Pump | Automatic irrigation |
| GSM SIM900A | SMS alerts (optional) |
| nRF24L01+PA/LNA | Wireless communication modules |

---

# 🖼️ **Circuit Diagrams (To Be Added)**  
*(Insert your images here)*


---

# 🧪 **Simulations (To Be Added)**  
*(Proteus / Tinkercad / Multisim files)*


---

# 🖥️ **System Architecture Diagram (To Be Added)**  

---

# 💻 **Code**
All code is included in the `/code` directory.

### **Notes:**
- This project contains **modified code** based on the original MIT-licensed code by **Mobasshir Mahbub**.  
- All modifications and enhancements are clearly documented.  
- Communication between Arduino Mega and ESP8266 is fully implemented.

---

# 📡 **How the System Works**

### **1. Sensor Layer**
Collects environmental data:
- Temperature  
- Humidity  
- Soil moisture  
- Gas concentration  
- Pressure  
- Rain detection  
- Motion detection  

### **2. Processing Layer (Arduino Mega)**
- Processes sensor values  
- Controls pump, motor, buzzer  
- Sends data to ESP8266  

### **3. IoT Layer (ESP8266)**
- Connects to Wi-Fi  
- Sends real-time data to cloud dashboard  

### **4. Automation Logic**
| Condition | Trigger |
|----------|---------|
| Soil moisture low | Pump ON |
| High temperature | Cooler fan ON |
| Motion detected | Buzzer ON |

---

# ⚖️ **Copyright & Licensing**

### **Original Work Copyright**

The original copyright notice **is preserved exactly**, as required by the MIT License.

### **This Project**
This repository is a **derivative academic reproduction** of the original work.  
All additional code, documentation, and diagrams created by **me** may be licensed under **MIT**, unless you want a different license.

---

# 🌱 **Future Improvements**
- Add soil pH monitoring  
- Add automatic fertilizer dosing  
- Add solar power management  
- Add mobile app dashboard  
- Add agri-robot / quadcopter integration  

---

# 📚 References

1. Mobasshir Mahbub, "IoT-Based Automated Smart Farming System," 2019.  
   [Link to the Original Paper]([https://example.com/original-paper](https://www.sciencedirect.com/science/article/abs/pii/S2542660520300044))  

---

# 🙌 **Acknowledgements**
- Original Author: **Mobasshir Mahbub (2019)**
- My Supervisor: Dr. Samiru Gayan – ENTC Department - University  of Moratuwa

---

