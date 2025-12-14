#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -86139197;
unsigned int var_2 = 4174472418U;
unsigned short var_4 = (unsigned short)33224;
unsigned short var_8 = (unsigned short)14433;
int var_9 = -812146546;
long long int var_10 = 4210391209757035419LL;
unsigned int var_11 = 3709289036U;
long long int var_13 = -560707882829518003LL;
unsigned long long int var_14 = 7612555668194413313ULL;
signed char var_15 = (signed char)115;
unsigned int var_16 = 2829642419U;
int zero = 0;
long long int var_17 = -7623517465215494613LL;
unsigned short var_18 = (unsigned short)48866;
unsigned short var_19 = (unsigned short)29106;
signed char var_20 = (signed char)-106;
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
