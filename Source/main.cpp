#include "header.hpp"

int main(int argc, char* argv[])
{
        char buffer[WSCREEN][HSCREEN] = { 0 };
    
        VideoCapture video("Resources/BadApple.mp4");
        Mat frame;
    
        if (!video.isOpened())
        {
                cout << "Failed to find the video!" << endl;
                system("pause");
                return -1;
        }
    
        Console::configcmd();
    
        while (video.isOpened())
        {
                video >> frame;
        
                if (frame.empty())
                {
                        cout << "The video playback has ended!" << endl;
                        system("pause");
                        break;
                }
        
                resize(frame, frame, Size(WSCREEN, HSCREEN)); 
        
                for (int y = 0; y <= HSCREEN; y++)
                {
                        for (int x = 0; x <= WSCREEN; x++)
                        {
                                Vec3b pixel = frame.at<Vec3b>(y, x);
                                
                                int r = pixel[2];
                                int g = pixel[1];
                                int b = pixel[0];
                
                                buffer[x][y] = ASCII::convertToAscii(r, g, b);
                        }
                }
        
                Console::printFrame(buffer);
                
                //Delay 10ms
                Sleep(10);
        
                Console::clearScreen();
        }
    
        video.release();
        destroyAllWindows();
    
        return 0;
}
