#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 21782403206251844ULL;
unsigned char var_2 = (unsigned char)26;
unsigned short var_6 = (unsigned short)34745;
unsigned int var_12 = 1832163563U;
int zero = 0;
unsigned int var_13 = 1318383963U;
signed char var_14 = (signed char)-51;
unsigned int var_15 = 1566015757U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
