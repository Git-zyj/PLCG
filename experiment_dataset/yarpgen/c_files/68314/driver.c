#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1385189325;
unsigned long long int var_5 = 16028267854308909932ULL;
unsigned char var_6 = (unsigned char)214;
int var_7 = -1450312219;
int var_9 = -1877721632;
unsigned short var_10 = (unsigned short)36407;
unsigned short var_11 = (unsigned short)47551;
unsigned int var_13 = 2760506594U;
unsigned char var_14 = (unsigned char)0;
long long int var_15 = 2266920927818806588LL;
int zero = 0;
unsigned int var_16 = 3019915811U;
unsigned short var_17 = (unsigned short)25672;
unsigned short var_18 = (unsigned short)8623;
void init() {
}

void checksum() {
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
