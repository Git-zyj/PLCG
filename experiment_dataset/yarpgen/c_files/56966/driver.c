#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 875005405739244092ULL;
unsigned int var_3 = 3688047448U;
unsigned char var_6 = (unsigned char)142;
unsigned long long int var_10 = 6705542058167238055ULL;
int zero = 0;
signed char var_11 = (signed char)-53;
unsigned char var_12 = (unsigned char)130;
unsigned long long int var_13 = 16864895542776271576ULL;
unsigned long long int var_14 = 8418489365778320777ULL;
unsigned long long int var_15 = 13628168450412497596ULL;
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
