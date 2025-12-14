#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -1690648251;
unsigned long long int var_5 = 12006726631247166668ULL;
unsigned short var_8 = (unsigned short)30363;
int zero = 0;
unsigned long long int var_12 = 143546061857473552ULL;
long long int var_13 = -1063209148044205829LL;
int var_14 = -440481246;
signed char var_15 = (signed char)-89;
void init() {
}

void checksum() {
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
