    #include <iostream>
    #include <wiringPiSPI.h>
    #define SPI_CHANNEL 0
    #define SPI_CLOCK_SPEED 1000000
    int main(int argc, char **argv)
    {
        int fd = wiringPiSPISetupMode(SPI_CHANNEL, SPI_CLOCK_SPEED, 0);
        if (fd == -1) {
            std::cout << "Failed to init SPI communication.\n";
            return -1;
        }
        std::cout << "SPI communication successfully setup.\n";
       
        unsigned char buf[2] = { 23, 0 };
        wiringPiSPIDataRW(SPI_CHANNEL, buf, 2);
        std::cout << "Data returned: " << +buf[1] << "\n"; 
        return 0;
    }
