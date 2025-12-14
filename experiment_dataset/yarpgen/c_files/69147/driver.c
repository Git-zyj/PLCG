#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 224494742;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)23370;
_Bool var_6 = (_Bool)0;
int var_10 = -1117291874;
int var_13 = -1044126768;
unsigned short var_14 = (unsigned short)38206;
unsigned char var_15 = (unsigned char)172;
unsigned short var_16 = (unsigned short)38878;
unsigned int var_17 = 2367553087U;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-20;
signed char var_21 = (signed char)-17;
signed char var_22 = (signed char)-16;
unsigned long long int var_23 = 8389755869179183037ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
