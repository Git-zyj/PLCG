#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2561431120U;
unsigned long long int var_2 = 3843764985323667200ULL;
unsigned int var_4 = 143529971U;
unsigned short var_7 = (unsigned short)31674;
unsigned int var_9 = 605658458U;
unsigned short var_11 = (unsigned short)11414;
int zero = 0;
unsigned int var_14 = 1999103977U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12034254208084283770ULL;
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
