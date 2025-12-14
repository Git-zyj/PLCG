#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 421470912U;
unsigned char var_1 = (unsigned char)184;
unsigned char var_2 = (unsigned char)80;
signed char var_3 = (signed char)-81;
unsigned char var_5 = (unsigned char)234;
short var_8 = (short)-14734;
unsigned short var_9 = (unsigned short)16838;
unsigned long long int var_10 = 9052552551601403056ULL;
unsigned long long int var_11 = 14739427371205459775ULL;
int zero = 0;
int var_14 = -1664686484;
unsigned int var_15 = 3304793157U;
unsigned int var_16 = 3505154966U;
unsigned int var_17 = 1707342251U;
long long int var_18 = 1013335209578758036LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
