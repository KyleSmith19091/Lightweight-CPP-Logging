#include "../include/ANSIColorTable.h"

#include <ostream>

namespace Log {

    class Clock {
        public:
            friend std::ostream& operator<<(std::ostream& output, const Log::Clock& l) {

                // Get current system time
                std::time_t t = std::time(0);
                std::tm *ct = std::localtime(&t);

                // Extract seconds, minutes and hours from struct
                int seconds = ct->tm_sec;
                int minutes = ct->tm_min;
                int hours = ct->tm_hour;

                // Format time string
                output << MAG << "{" << (hours<10?"0":"") << hours <<":" << (minutes<10?"0":"") << minutes << ":" << (seconds<10?"0":"") << seconds << "} " << RST;

                return output;
            }
    };

    class Debug {
        private:
            static constexpr const char* DEBUG_COLOR = GRN;
            static constexpr const char* MESSAGE = "[DEBUG]";

        public: 
            friend std::ostream &operator<<(std::ostream &output, const Log::Debug& l) { 
                output << Log::Clock() << DEBUG_COLOR << MESSAGE << RST << "    ";
                return output;            
            }       
    };

    class Info {
        private:
            static constexpr const char* DEBUG_COLOR = BLU;
            static constexpr const char* MESSAGE = "[INFO]";

        public: 
            friend std::ostream &operator<<(std::ostream &output, const Log::Info& l) { 
                output << Log::Clock() << DEBUG_COLOR << MESSAGE << RST << "     ";
                return output;            
            }       
    };

    class Warning {
        private:
            static constexpr const char* DEBUG_COLOR = YEL;
            static constexpr const char* MESSAGE = "[WARNING]";

        public: 
            friend std::ostream &operator<<(std::ostream &output, const Log::Warning& l) { 
                output << Log::Clock() << DEBUG_COLOR << MESSAGE << RST << "  ";
                return output;            
            }       
    };

    class Error {
        private:
            static constexpr const char* DEBUG_COLOR = HRED;
            static constexpr const char* MESSAGE = "[ERROR]";

        public: 
            friend std::ostream &operator<<(std::ostream &output, const Log::Error& l) { 
                output << Log::Clock() << DEBUG_COLOR << MESSAGE << RST << "    ";
                return output;            
            }       
    };

    class Critical {
        private:
            static constexpr const char* DEBUG_COLOR = REDHB;
            static constexpr const char* MESSAGE = "[CRITICAL]";

        public: 
            friend std::ostream &operator<<(std::ostream &output, const Log::Critical& l) { 
                output << Log::Clock() << DEBUG_COLOR << MESSAGE << RST << " ";
                return output;            
            }       
    };
};

