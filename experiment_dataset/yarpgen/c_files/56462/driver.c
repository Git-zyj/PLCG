#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
short var_2 = (short)-15721;
unsigned short var_5 = (unsigned short)3405;
unsigned short var_7 = (unsigned short)42479;
unsigned short var_8 = (unsigned short)53596;
int var_9 = -126232449;
unsigned short var_10 = (unsigned short)39354;
int var_11 = 1236836538;
unsigned short var_12 = (unsigned short)28668;
unsigned int var_13 = 3695437592U;
int zero = 0;
short var_14 = (short)3791;
short var_15 = (short)15449;
unsigned long long int var_16 = 8634004505892312972ULL;
short var_17 = (short)-31863;
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
