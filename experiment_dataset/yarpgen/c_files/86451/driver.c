#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2999125131567707360LL;
_Bool var_1 = (_Bool)0;
long long int var_3 = 6445075746333653502LL;
signed char var_4 = (signed char)7;
long long int var_6 = 8904582846700899867LL;
int var_7 = -905790324;
unsigned char var_9 = (unsigned char)202;
int var_11 = -766955522;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)64811;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
