#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3299555655U;
signed char var_3 = (signed char)-28;
signed char var_4 = (signed char)-100;
long long int var_5 = -664683088498974550LL;
int var_6 = 827899169;
unsigned char var_7 = (unsigned char)114;
signed char var_8 = (signed char)48;
unsigned long long int var_9 = 4587063009320866630ULL;
signed char var_10 = (signed char)90;
unsigned short var_11 = (unsigned short)10982;
int zero = 0;
unsigned char var_12 = (unsigned char)149;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
