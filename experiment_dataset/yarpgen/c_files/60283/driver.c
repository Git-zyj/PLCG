#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5819762005809296243ULL;
signed char var_3 = (signed char)-57;
int var_7 = 755640009;
long long int var_8 = -2429248739334490346LL;
short var_9 = (short)3530;
unsigned short var_11 = (unsigned short)17815;
unsigned char var_12 = (unsigned char)246;
long long int var_13 = 8641316132875301313LL;
unsigned int var_15 = 1310730702U;
int zero = 0;
long long int var_16 = 154530449448729892LL;
unsigned long long int var_17 = 4250058843549823558ULL;
unsigned char var_18 = (unsigned char)36;
unsigned short var_19 = (unsigned short)54088;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
