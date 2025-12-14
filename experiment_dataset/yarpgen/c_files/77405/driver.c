#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned short var_4 = (unsigned short)1673;
long long int var_5 = 7665840413083632014LL;
unsigned short var_8 = (unsigned short)8989;
unsigned char var_9 = (unsigned char)138;
int zero = 0;
unsigned int var_11 = 3992820879U;
unsigned short var_12 = (unsigned short)23352;
unsigned int var_13 = 1555824543U;
unsigned int var_14 = 4289622312U;
signed char var_15 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
