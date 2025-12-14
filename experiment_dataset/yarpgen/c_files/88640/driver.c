#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 920545319;
int var_3 = -1580350335;
unsigned long long int var_8 = 17927569585886560773ULL;
unsigned short var_10 = (unsigned short)52591;
int zero = 0;
unsigned long long int var_11 = 10496460303010614511ULL;
signed char var_12 = (signed char)-35;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3187631297U;
unsigned long long int var_15 = 14970789399177196126ULL;
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
