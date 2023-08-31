#define ENABLE_WEB_SERVER   
#define ENABLE_OTA  
#include <Arduino.h>


#ifdef ESP32
#include <SPIFFS.h>
#endif

#ifdef ESP8266
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include "coredecls.h"
#endif



#ifdef ENABLE_WEB_SERVER
#ifdef ESP8266
#include <ESP8266WebServer.h>
 ESP8266WebServer server(80);
#endif

#include <WebServer.h>
WebServer server(80);
#endif 

#if defined(ESP32) && defined(ENABLE_OTA)
#include <Update.h>
#endif

#ifdef ENABLE_WEB_SERVER
#include "spiffs_webserver.h"
bool isWebserver_started=false;
#endif 

const int relay_gpio_1=15;
const int relay_gpio_2=2;
const int relay_gpio_3=4;
const int relay_gpio_4=18;
const int relay_gpio_5=19;
const int relay_gpio_6=21;

#include <WiFiManager.h>        

const char* HOSTNAME="ES";
const char* ssid     = "Aliyu";
const char* password = "macbooker";

extern "C"{
#include "homeintegration.h"
}
#ifdef ESP8266
#include "homekitintegrationcpp.h"
#endif


homekit_service_t* hapservice_1={0};
homekit_service_t* hapservice_2={0};
homekit_service_t* hapservice_3={0};
homekit_service_t* hapservice_4={0};
homekit_service_t* hapservice_5={0};
homekit_service_t* hapservice_6={0};


String pair_file_name="/pair.dat";



void switch_callback_1(homekit_characteristic_t *ch, homekit_value_t value, void *context);
void switch_callback_2(homekit_characteristic_t *ch, homekit_value_t value, void *context);
void switch_callback_3(homekit_characteristic_t *ch, homekit_value_t value, void *context);
void switch_callback_4(homekit_characteristic_t *ch, homekit_value_t value, void *context);
void switch_callback_5(homekit_characteristic_t *ch, homekit_value_t value, void *context);
void switch_callback_6(homekit_characteristic_t *ch, homekit_value_t value, void *context);


//Web server section
#define ENABLE_OTA  //if OTA need

#include "spiffs_webserver.h"


bool getSwitchVal_1(){
  if(hapservice_1){
      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_1, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        return ch->value.bool_value;
      }
    }
    return false;
}

bool getSwitchVal_2(){
  if(hapservice_2){
      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_2, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        return ch->value.bool_value;
      }
    }
    return false;
}

bool getSwitchVal_3(){
  if(hapservice_3){
      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_3, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        return ch->value.bool_value;
      }
    }
    return false;
}

bool getSwitchVal_4(){
  if(hapservice_4){
      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_4, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        return ch->value.bool_value;
      }
    }
    return false;
}

bool getSwitchVal_5(){
  if(hapservice_5){
      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_5, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        return ch->value.bool_value;
      }
    }
    return false;
}

bool getSwitchVal_6(){
  if(hapservice_6){
      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_6, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        return ch->value.bool_value;
      }
    }
    return false;
}

void handleGetVal(){
    server.send(200, FPSTR(TEXT_PLAIN), getSwitchVal_1()?"1":"0");
    server.send(200, FPSTR(TEXT_PLAIN), getSwitchVal_2()?"1":"0");
    server.send(200, FPSTR(TEXT_PLAIN), getSwitchVal_3()?"1":"0");
    server.send(200, FPSTR(TEXT_PLAIN), getSwitchVal_4()?"1":"0");
    server.send(200, FPSTR(TEXT_PLAIN), getSwitchVal_5()?"1":"0");
    server.send(200, FPSTR(TEXT_PLAIN), getSwitchVal_6()?"1":"0");
}

void set_switch_1(bool val){
   Serial.println(String("set_switch_1:")+String(val?"True":"False")); 
  digitalWrite(relay_gpio_1, val?HIGH:LOW);
  //we need notify apple about changes
  
  if(hapservice_1){
    Serial.println("notify hap 1"); 
    //getting on/off characteristic
    homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_1, HOMEKIT_CHARACTERISTIC_ON);
    if(ch){
        
        if(ch->value.bool_value!=val){  //wil notify only if different
          ch->value.bool_value=val;
          homekit_characteristic_notify(ch,ch->value);
        }
    }
  }
}
void set_switch_2(bool val){
   Serial.println(String("set_switch_2:")+String(val?"True":"False")); 
  digitalWrite(relay_gpio_2, val?HIGH:LOW);
  //we need notify apple about changes
  
  if(hapservice_2){
    Serial.println("notify hap 2"); 
    //getting on/off characteristic
    homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_2, HOMEKIT_CHARACTERISTIC_ON);
    if(ch){
        
        if(ch->value.bool_value!=val){  //wil notify only if different
          ch->value.bool_value=val;
          homekit_characteristic_notify(ch,ch->value);
        }
    }
  }
}

void set_switch_3(bool val){
   Serial.println(String("set_switch_3:")+String(val?"True":"False")); 
  digitalWrite(relay_gpio_3, val?HIGH:LOW);
  //we need notify apple about changes
  
  if(hapservice_3){
    Serial.println("notify hap 3"); 
    //getting on/off characteristic
    homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_3, HOMEKIT_CHARACTERISTIC_ON);
    if(ch){
        
        if(ch->value.bool_value!=val){  //wil notify only if different
          ch->value.bool_value=val;
          homekit_characteristic_notify(ch,ch->value);
        }
    }
  }
}
void set_switch_4(bool val){
   Serial.println(String("set_switch_4:")+String(val?"True":"False")); 
  digitalWrite(relay_gpio_4, val?HIGH:LOW);
  //we need notify apple about changes
  
  if(hapservice_4){
    Serial.println("notify hap 4"); 
    //getting on/off characteristic
    homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_4, HOMEKIT_CHARACTERISTIC_ON);
    if(ch){
        
        if(ch->value.bool_value!=val){  //wil notify only if different
          ch->value.bool_value=val;
          homekit_characteristic_notify(ch,ch->value);
        }
    }
  }
}
void set_switch_5(bool val){
   Serial.println(String("set_switch_5:")+String(val?"True":"False")); 
  digitalWrite(relay_gpio_5, val?HIGH:LOW);
  //we need notify apple about changes
  
  if(hapservice_5){
    Serial.println("notify hap 5"); 
    //getting on/off characteristic
    homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_5, HOMEKIT_CHARACTERISTIC_ON);
    if(ch){
        
        if(ch->value.bool_value!=val){  //wil notify only if different
          ch->value.bool_value=val;
          homekit_characteristic_notify(ch,ch->value);
        }
    }
  }
}
void set_switch_6(bool val){
   Serial.println(String("set_switch_6:")+String(val?"True":"False")); 
  digitalWrite(relay_gpio_6, val?HIGH:LOW);
  //we need notify apple about changes
  
  if(hapservice_6){
    Serial.println("notify hap 6"); 
    //getting on/off characteristic
    homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_6, HOMEKIT_CHARACTERISTIC_ON);
    if(ch){
        
        if(ch->value.bool_value!=val){  //wil notify only if different
          ch->value.bool_value=val;
          homekit_characteristic_notify(ch,ch->value);
        }
    }
  }
}

void handleSetVal(){
  if (server.args() !=2){
    server.send(505, FPSTR(TEXT_PLAIN), "Bad args");
    return;
  }
  //to do analyze
  if(server.arg("var") == "ch1"){
    if(hapservice_1){

      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_1, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        set_switch_1(server.arg("val")=="true");
      }
    }
   else if(hapservice_2){

      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_2, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        set_switch_2(server.arg("val")=="true");
      }
    }

    else if(hapservice_3){

      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_3, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        set_switch_3(server.arg("val")=="true");
      }
    }
    else if(hapservice_4){

      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_4, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        set_switch_4(server.arg("val")=="true");
      }
    }
    else if(hapservice_5){

      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_5, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        set_switch_5(server.arg("val")=="true");
      }
    }
    else if(hapservice_6){

      homekit_characteristic_t * ch= homekit_service_characteristic_by_type(hapservice_6, HOMEKIT_CHARACTERISTIC_ON);
      if(ch){
        set_switch_6(server.arg("val")=="true");
      }
    }
  }

}


void init_hap_storage(){
  Serial.print("init_hap_storage");
 
    
  File fsDAT=SPIFFS.open(pair_file_name, "r");
  
 if(!fsDAT){
   Serial.println("Failed to read pair.dat");
   SPIFFS.format(); 
   
 }
  int size=hap_get_storage_size_ex();
  char* buf=new char[size];
  memset(buf,0xff,size);
  if(fsDAT)
  fsDAT.readBytes(buf,size);
 
  hap_init_storage_ex(buf,size);
  if(fsDAT)
    fsDAT.close();
  delete []buf;

}
void storage_changed(char * szstorage,int bufsize){



  SPIFFS.remove(pair_file_name);
  File fsDAT=SPIFFS.open(pair_file_name, "w+");
  if(!fsDAT){
    Serial.println("Failed to open pair.dat");
    return;
  }
  fsDAT.write((uint8_t*)szstorage, bufsize);

  fsDAT.close();
}
//can be used for any logic, it will automatically inform Apple about state changes

void switch_callback_1(homekit_characteristic_t *ch, homekit_value_t value, void *context) {
    Serial.println("switch_callback_1");
 set_switch_1(ch->value.bool_value);
}

void switch_callback_2(homekit_characteristic_t *ch, homekit_value_t value, void *context) {
    Serial.println("switch_callback_2");
 set_switch_2(ch->value.bool_value);
}
void switch_callback_3(homekit_characteristic_t *ch, homekit_value_t value, void *context) {
    Serial.println("switch_callback_3");
 set_switch_3(ch->value.bool_value);
}
void switch_callback_4(homekit_characteristic_t *ch, homekit_value_t value, void *context) {
    Serial.println("switch_callback_4");
 set_switch_4(ch->value.bool_value);
}
void switch_callback_5(homekit_characteristic_t *ch, homekit_value_t value, void *context) {
    Serial.println("switch_callback_5");
 set_switch_5(ch->value.bool_value);
}
void switch_callback_6(homekit_characteristic_t *ch, homekit_value_t value, void *context) {
    Serial.println("switch_callback_6");
 set_switch_6(ch->value.bool_value);
}
//#ifdef ENABLE_WIFI_MANAGER
void startwifimanager() {
  WiFiManager wifiManager;



  if (!wifiManager.autoConnect(HOSTNAME, NULL)) {
      ESP.restart();
      delay(1000);
   }
}


void setup() {
 #ifdef ESP8266 
  disable_extra4k_at_link_time();
 #endif 
  Serial.begin(115200);
    delay(10);

#ifdef ESP32
     if (!SPIFFS.begin(true)) {
      // Serial.print("SPIFFS Mount failed");
     }
#endif
#ifdef ESP8266
     if (!SPIFFS.begin()) {
      Serial.print("SPIFFS Mount failed");
     }
#endif


    Serial.print("Free heap: ");
    // Serial.println(system_get_free_heap_size());


    pinMode(relay_gpio_1, OUTPUT);
    pinMode(relay_gpio_2, OUTPUT);
    pinMode(relay_gpio_3, OUTPUT);
    pinMode(relay_gpio_4, OUTPUT);
    pinMode(relay_gpio_5, OUTPUT);
    pinMode(relay_gpio_6, OUTPUT);

    
    init_hap_storage();
  
    set_callback_storage_change(storage_changed);

    /// We will use for this example only one accessory (possible to use a several on the same esp)
    //Our accessory type is light bulb , apple interface will proper show that
    hap_setbase_accessorytype(homekit_accessory_category_switch);
    /// init base properties
    hap_initbase_accessory_service("host","Aliyu ","0","EspHapSwitch","1.0");

   //we will add only one light bulb service and keep pointer for nest using
    hapservice_1= hap_add_switch_service("Switch 1",switch_callback_1,(void*)&relay_gpio_1);
    hapservice_2= hap_add_switch_service("Switch 2",switch_callback_2,(void*)&relay_gpio_2);
    hapservice_3= hap_add_switch_service("Switch 3",switch_callback_3,(void*)&relay_gpio_3);
    hapservice_4= hap_add_switch_service("Switch 4",switch_callback_4,(void*)&relay_gpio_4);
    hapservice_5= hap_add_switch_service("Switch 5",switch_callback_5,(void*)&relay_gpio_5);
    hapservice_6= hap_add_switch_service("Switch 6",switch_callback_6,(void*)&relay_gpio_6);

#ifdef ENABLE_WIFI_MANAGER   
   startwifimanager();
#else

    WiFi.mode(WIFI_STA);
    WiFi.begin((char*)ssid, (char*)password);
     while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    
#endif
    Serial.println(PSTR("WiFi connected"));
    Serial.println(PSTR("IP address: "));
    Serial.println(WiFi.localIP());
    
    hap_init_homekit_server();   

#ifdef ENABLE_WEB_SERVER
String strIp=String(WiFi.localIP()[0]) + String(".") + String(WiFi.localIP()[1]) + String(".") +  String(WiFi.localIP()[2]) + String(".") +  String(WiFi.localIP()[3]);    
#ifdef ESP8266
 if(hap_homekit_is_paired()){
#endif
  Serial.println(PSTR("Setting web server"));
    SETUP_FILEHANDLES
     server.on("/get", handleGetVal);
      server.on("/set", handleSetVal);   
     server.begin(); 
     Serial.println(String("Web site http://")+strIp);  
     Serial.println(String("File system http://")+strIp+String("/browse")); 
      Serial.println(String("Update http://")+strIp+String("/update"));     
     isWebserver_started=true;
#ifdef ESP8266
}else
 Serial.println(PSTR("Web server is NOT SET, waiting for pairing"));
#endif

#endif
}

void loop() {

#ifdef ESP8266
  hap_homekit_loop();
#endif
  
if(isWebserver_started)
    server.handleClient();


}

//#endif