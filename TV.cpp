#include <iostream>

using namespace std;

class TV
{
public:
    int channel, volumeLevel;
    bool on;
    TV(){
        channel = 1;
        volumeLevel = 1;
        on = false;
    }
    void turnOn(){
        on = true;
    }
    void turnOff(){
        on = false;
    }
    void setChannel(int newChannel) {
        if( on && newChannel >= 1 && newChannel <= 120 ) {
            channel = newChannel;
        }
    }
    void setVolume( int newVolumeLevel ) {
        if( on && newVolumeLevel >= 1 && newVolumeLevel <= 7 ) {
            volumeLevel = newVolumeLevel;
        }
    }
    void channelUp(){
        if( on && channel < 120 ) {
            channel++;
        }
    }
    void channelDown(){
        if( on && channel > 1 ) {
            channel--;
        }
    }
    void volumeUp(){
        if( on && volumeLevel < 7 ) {
            volumeLevel++;
        }
    }
    void volumeDown(){
        if( on && volumeLevel > 1 ) {
            volumeLevel--;
        }
    }
};

int main()
{
    TV tv1;
    tv1.turnOn();
    tv1.setChannel(30);
    tv1.setVolume(3);

    TV tv2;
    tv2.turnOn();
    tv2.channelUp();
    tv2.channelUp();
    tv2.volumeUp();

    cout << "TV1's channel is " << tv1.channel << " and volume level is " << tv1.volumeLevel << endl ;

    cout << "TV2's channel is " << tv2.channel << " and volume level is " << tv2.volumeLevel << endl ;

    return 0;
}
