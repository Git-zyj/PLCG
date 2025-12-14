#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)63;
unsigned char var_4 = (unsigned char)85;
short var_5 = (short)11815;
short var_6 = (short)32504;
unsigned long long int var_8 = 18406893559469679894ULL;
int var_9 = 1473733866;
unsigned char var_10 = (unsigned char)252;
short var_12 = (short)-10438;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5204566784297800053ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-19;
void init() {
}

void checksum() {
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
