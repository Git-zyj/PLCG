#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-252;
unsigned long long int var_2 = 8752029955956060396ULL;
signed char var_3 = (signed char)-12;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)106;
unsigned short var_11 = (unsigned short)52030;
unsigned int var_12 = 4176627846U;
int zero = 0;
unsigned int var_17 = 1396338677U;
signed char var_18 = (signed char)-11;
signed char var_19 = (signed char)-23;
unsigned char var_20 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
