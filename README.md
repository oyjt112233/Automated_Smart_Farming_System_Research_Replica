# Automated Smart Farming System: Research-Replica

ioT-based Automated Smart Farming System: Replication and Enhancement of an existing research paper.

> ioT-based automated smart farming system: replication and enhancement of an existing research paper, implemented as part of our university Mini Research Project, completed in 2025.
> Tasks of that project includes selecting a quality research paper, understand it, reproduce its results, and present your work at the end of the semester.

> The following documentation highlights the exsiting paper detalis, what I implemented and what I modified from the original design.

# IoT-Based Automated Smart Farming System  
### *Replication & Enhancement of an Existing Research Paper (Mini Research Project – EN5903)*

This repository contains the work completed for the **Mini Research Project (EN5903)** of the  
PG Dip./M.Sc. in Electronics and Automation program – Semester 2.  

The project is a **reproduction and enhancement** of the IoT-based smart farming system proposed in a research paper by **Mobasshir Mahbub (2019)**, whose code was published under the **MIT License**.  
This repository includes my implementation, improvements, circuit designs, and IoT integrations.

---

# 🧭 **Overview of the Mini Research Project (EN5903)**

The Mini Research Project is a **mandatory 4-credit module** where each student must:

- Select a **good-quality journal or conference paper** related to Electronics & Automation  
- Read, understand, and **reproduce the results** presented in the paper  
- Work with an assigned academic supervisor  
- Present a **10-minute presentation**, **5-minute demonstration**, and attend **10-minute Q&A**  
- Demonstrate deep understanding of the theory, implementation, and results  

### 📝 **Evaluation Criteria**
- **50% – Understanding the concepts** in the paper  
- **50% – Reproducing the experimental results**  
Academic integrity is mandatory. Any data manipulation leads to mark deduction.

This repository documents my **complete implementation**, ready for demonstration and review.

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

