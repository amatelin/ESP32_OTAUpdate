//
//  OTAUpdate.hpp
//  OTA Update
//
//  Created by Alexis Matelin on 02/06/2019.
//
//

#ifndef OTAUpdate_hpp
#define OTAUpdate_hpp

class OTAUpdateClass {
private:
public:
    OTAUpdateClass();
    ~OTAUpdateClass();

    static void setup();
    static void handle();
protected:

};

extern OTAUpdateClass OTAUpdate;

#endif /* OTAUpdate_hpp */
