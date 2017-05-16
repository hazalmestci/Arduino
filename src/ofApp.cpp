#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    mySerial.listDevices();
    vector <ofSerialDeviceInfo> deviceList = mySerial.getDeviceList();
    
    int baud = 57600;
    mySerial.setup(0, 57600); //open the first device and talk to it at 57600 baud
  //  mySerial.setup("COM4", 9600); //open the first device and talk to it at 9600 baud

    
    
}


void ofApp::printByteToConsole()
{
    int myByte = 0;
    myByte = mySerial.readByte();
    if ( myByte == OF_SERIAL_NO_DATA )
        printf("\nno data was read");
    else if ( myByte == OF_SERIAL_ERROR )
        printf("\nan error occurred");
    else
        printf("\nmyByte is %d ", myByte);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    printByteToConsole();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
