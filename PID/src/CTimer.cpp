/* 
 * Timer Class
 * By Danny Battison
 * gabehabe@hotmail.com
 */

#include <ctime>

class CTimer
{
    public: // everything is public for ease of access
        // begin/end variables
        clock_t Begin;
        clock_t End;

        // variable declarations used for time calculation
        double elapTicks;
        double elapMilli, elapSeconds, elapMinutes;

        // constructor: the timer will begin as soon as a timer is created
        CTimer () {this->Begin = clock () * CLK_TCK;}
        // call myTimer.Stop () to stop the timer
        void Stop () { this->End   = clock () * CLK_TCK; getTimes ();}

        // call getTimes
        void getTimes ()
        {
            // variable definitions on to calculate time taken
            this->elapTicks   = this->End - this->Begin; // stop the timer, and calculete the time taken
            this->elapMilli   = this->elapTicks/1000;     //milliseconds from Begin to End
            this->elapSeconds = this->elapMilli/1000;   //seconds from Begin to End
            this->elapMinutes = this->elapSeconds/60;   //minutes from Begin to End
        }
};