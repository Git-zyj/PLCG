#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18847;
int var_2 = 1457097430;
int var_3 = 2023327788;
unsigned char var_4 = (unsigned char)231;
int var_5 = -1206132288;
unsigned int var_6 = 3021251035U;
signed char var_8 = (signed char)89;
short var_9 = (short)-23133;
signed char var_10 = (signed char)120;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-20924;
int zero = 0;
signed char var_14 = (signed char)34;
signed char var_15 = (signed char)120;
int var_16 = -830777924;
long long int var_17 = 3744992163076371684LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
