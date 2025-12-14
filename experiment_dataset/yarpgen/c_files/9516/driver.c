#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1715179152;
signed char var_3 = (signed char)-6;
unsigned char var_7 = (unsigned char)130;
unsigned int var_8 = 438948418U;
unsigned long long int var_10 = 14401192099637121717ULL;
unsigned long long int var_13 = 9012337753505093001ULL;
unsigned char var_14 = (unsigned char)54;
int zero = 0;
signed char var_17 = (signed char)13;
short var_18 = (short)-1540;
unsigned long long int var_19 = 6294153665651081199ULL;
unsigned int var_20 = 2533043090U;
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
