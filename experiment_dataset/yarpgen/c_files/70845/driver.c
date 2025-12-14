#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1030794476;
unsigned short var_6 = (unsigned short)23504;
unsigned short var_7 = (unsigned short)2577;
unsigned short var_8 = (unsigned short)45072;
unsigned short var_10 = (unsigned short)64790;
int var_11 = 442547055;
unsigned short var_14 = (unsigned short)37715;
int zero = 0;
unsigned short var_18 = (unsigned short)38989;
unsigned short var_19 = (unsigned short)34072;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
