#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1309;
unsigned long long int var_3 = 10206987401695991362ULL;
unsigned short var_12 = (unsigned short)11889;
unsigned int var_17 = 3171059823U;
unsigned short var_18 = (unsigned short)14185;
int zero = 0;
short var_19 = (short)-1048;
short var_20 = (short)8180;
unsigned short var_21 = (unsigned short)57742;
unsigned int var_22 = 3956704343U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
