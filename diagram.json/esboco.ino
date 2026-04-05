{
  "version": 1,
  "author": "Prof. Edwins Ramires",
  "editor": "wokwi",
  "parts": [
    { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": 67.2, "left": -4.76, "attrs": {} },
    { "type": "wokwi-led", "id": "led1", "top": 34.8, "left": -92.2, "attrs": { "color": "red" } },
    {
      "type": "wokwi-led",
      "id": "led2",
      "top": 34.8,
      "left": -130.6,
      "attrs": { "color": "blue" }
    },
    {
      "type": "wokwi-dht22",
      "id": "dht1",
      "top": -18.9,
      "left": 148.2,
      "attrs": { "temperature": "-13.9", "humidity": "33.5" }
    }
  ],
  "connections": [
    [ "esp:TX", "$serialMonitor:RX", "", [] ],
    [ "esp:RX", "$serialMonitor:TX", "", [] ],
    [ "esp:26", "led1:A", "green", [ "h-76.65" ] ],
    [ "esp:27", "led2:A", "green", [ "h0" ] ],
    [ "led1:C", "led2:C", "black", [ "v19.2", "h-38" ] ],
    [ "esp:GND.1", "led2:C", "black", [ "h-124.65", "v-105.6" ] ],
    [ "dht1:VCC", "esp:3V3", "red", [ "v9.6", "h-38.4", "v-57.6", "h-115.2", "v19.2" ] ],
    [ "esp:18", "dht1:SDA", "green", [ "h67.2" ] ],
    [ "esp:GND.2", "dht1:GND", "black", [ "h9.6", "v86.4", "h76.8" ] ]
  ],
  "dependencies": {}
}