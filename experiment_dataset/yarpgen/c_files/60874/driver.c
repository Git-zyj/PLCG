#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned short var_1 = (unsigned short)5419;
unsigned int var_6 = 2663825135U;
unsigned long long int var_9 = 3556270157904445053ULL;
signed char var_12 = (signed char)-6;
unsigned char var_14 = (unsigned char)79;
int zero = 0;
signed char var_16 = (signed char)-25;
signed char var_17 = (signed char)-1;
signed char var_18 = (signed char)-90;
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
