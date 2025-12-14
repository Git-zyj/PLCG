#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4503;
unsigned int var_3 = 4181756938U;
long long int var_6 = -3348162728922260919LL;
unsigned short var_7 = (unsigned short)14777;
unsigned char var_8 = (unsigned char)20;
unsigned long long int var_9 = 15735486449888040127ULL;
unsigned int var_15 = 2171888753U;
int zero = 0;
signed char var_16 = (signed char)-94;
unsigned long long int var_17 = 12303968888382640009ULL;
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
