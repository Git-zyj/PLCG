#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1647033134;
unsigned short var_5 = (unsigned short)19900;
int var_6 = -2075935167;
unsigned char var_8 = (unsigned char)167;
unsigned short var_9 = (unsigned short)62345;
int zero = 0;
unsigned short var_15 = (unsigned short)1440;
unsigned int var_16 = 3852097993U;
int var_17 = 2112515494;
signed char var_18 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
