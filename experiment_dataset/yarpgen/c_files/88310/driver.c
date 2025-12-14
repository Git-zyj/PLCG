#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)37;
unsigned short var_9 = (unsigned short)64076;
unsigned int var_10 = 546177343U;
int zero = 0;
long long int var_18 = -3654842428699503696LL;
unsigned char var_19 = (unsigned char)59;
unsigned short var_20 = (unsigned short)43814;
unsigned char var_21 = (unsigned char)73;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
