#include <iostream>
#include <string>
using namespace std;

class CloudResource {
    protected:
    string resourceName;

    public:
    CloudResource(string name) : resourceName(name) {}
    virtual void authenticate() = 0;
    virtual ~CloudResource() {
        cout << resourceName << " resource is being deallocated." << endl;
    }
};

class SupabaseDB : public CloudResource {
    public:
    SupabaseDB(string name) : CloudResource(name) {}
    void authenticate() override {
        cout << "Authenticating Supabase DB: " << resourceName << "Verifying super user permissions... Access Granted" <<endl;
    }
};

class CloudflareR2 : public CloudResource {
    public:
    CloudflareR2(string name) : CloudResource(name) {}
    void authenticate() override {
        cout << "Authenticating Cloudflare R2 bucket: " << resourceName << "Verifying API key... Access Granted" <<endl;
    }
};

int main() {
    CloudResource* db = new SupabaseDB{"Users_Table"};
    CloudResource* storage = new CloudflareR2{"Image_Assets"};

    db->authenticate();
    storage->authenticate();

    delete db;
    delete storage;
    return 0;
}
