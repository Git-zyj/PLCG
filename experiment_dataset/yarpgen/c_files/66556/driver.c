#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-102;
long long int var_4 = 4707521986717512974LL;
int var_5 = 646595462;
int var_6 = 435771288;
unsigned short var_8 = (unsigned short)25160;
unsigned long long int var_11 = 13761005022075248300ULL;
unsigned char var_14 = (unsigned char)216;
int zero = 0;
unsigned char var_16 = (unsigned char)49;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
