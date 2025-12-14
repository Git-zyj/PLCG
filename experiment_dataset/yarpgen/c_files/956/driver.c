#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 79775013U;
unsigned short var_2 = (unsigned short)31056;
unsigned char var_4 = (unsigned char)117;
unsigned int var_6 = 2918493974U;
long long int var_7 = -1465833926746119517LL;
long long int var_8 = -8838513703087031006LL;
int var_9 = 1657382587;
unsigned short var_10 = (unsigned short)8641;
long long int var_11 = -2569012654653959257LL;
int var_13 = 1148086593;
signed char var_14 = (signed char)36;
int zero = 0;
signed char var_15 = (signed char)106;
unsigned long long int var_16 = 14475919270162858071ULL;
int var_17 = -1178311942;
void init() {
}

void checksum() {
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
