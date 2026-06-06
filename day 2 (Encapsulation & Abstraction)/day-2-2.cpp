#include <iostream>
#include <string>
using namespace std;

class StorageBucket{
    private:
    string bucketName;
    int storageUsedMB;
    bool hasSuperUserAccess;
    
    public:
    StorageBucket(string name, int storageUsedMB, bool superUserAccess) : bucketName(name), storageUsedMB(0), hasSuperUserAccess(false) {}

    void grantSuperUser() {
        hasSuperUserAccess = true;
        cout << "Super user access granted for bucket: " << bucketName << endl;
    }
    int getStorageUsed() {
        return storageUsedMB;
    }
    void uploadFile(int fileSize) {
        if (hasSuperUserAccess == false) {
            cout << "Authentication Error: Missing super user permission. Upload denied " << bucketName << endl;
            return;
        }
        if (hasSuperUserAccess == true){
            storageUsedMB += fileSize;
            cout << "File of size " << fileSize << "MB uploaded to bucket: " << bucketName << ". Total storage used: " << storageUsedMB << "MB" << endl;
        }
        } 
};

int main(){
    StorageBucket Production_DB("Production_DB", 0, false);
    Production_DB.uploadFile(500);
    Production_DB.grantSuperUser();
    Production_DB.uploadFile(500);
    cout << Production_DB.getStorageUsed() << endl;
    return 0;
};
