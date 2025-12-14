#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52466;
unsigned short var_6 = (unsigned short)60573;
unsigned char var_7 = (unsigned char)44;
int var_8 = 1332006941;
unsigned long long int var_9 = 10532989303610377602ULL;
signed char var_12 = (signed char)-73;
int zero = 0;
unsigned long long int var_14 = 6509752772229815524ULL;
unsigned short var_15 = (unsigned short)43429;
short var_16 = (short)-25728;
int var_17 = 1331497829;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
