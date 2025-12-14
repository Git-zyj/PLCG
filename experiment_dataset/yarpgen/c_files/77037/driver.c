#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3197548337U;
unsigned int var_3 = 2782091253U;
unsigned int var_5 = 2795109509U;
int var_6 = 930908263;
int var_7 = -798649172;
int var_8 = -252109692;
unsigned int var_17 = 3918673759U;
int zero = 0;
int var_18 = -462790467;
int var_19 = 1974889734;
unsigned int var_20 = 1569562042U;
int var_21 = 1539413613;
int var_22 = 1026456055;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
