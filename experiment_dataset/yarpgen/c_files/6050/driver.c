#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_7 = (signed char)8;
unsigned long long int var_8 = 4306486305309337700ULL;
long long int var_9 = 2870196513150367444LL;
unsigned char var_12 = (unsigned char)56;
unsigned char var_15 = (unsigned char)34;
int zero = 0;
unsigned char var_19 = (unsigned char)144;
long long int var_20 = -5445374769205774431LL;
unsigned long long int var_21 = 2953620395475667277ULL;
void init() {
}

void checksum() {
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
