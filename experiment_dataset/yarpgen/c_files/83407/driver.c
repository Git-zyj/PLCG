#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 790409605505168684ULL;
unsigned int var_1 = 3345782878U;
int var_2 = -1133628343;
unsigned int var_5 = 112977121U;
unsigned int var_6 = 3351262385U;
int var_7 = -955099014;
unsigned long long int var_9 = 4900825818096468405ULL;
int var_10 = -247529114;
signed char var_11 = (signed char)-5;
short var_12 = (short)-3081;
short var_13 = (short)18088;
long long int var_14 = 3987495881987020977LL;
int zero = 0;
signed char var_17 = (signed char)-60;
long long int var_18 = 4192242061477610146LL;
unsigned long long int var_19 = 13292084612784478013ULL;
void init() {
}

void checksum() {
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
