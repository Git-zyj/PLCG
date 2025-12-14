#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1243716557U;
long long int var_2 = -1324605300797965431LL;
unsigned int var_3 = 345353118U;
_Bool var_6 = (_Bool)1;
long long int var_11 = 9010630373221524907LL;
int zero = 0;
int var_12 = 207292294;
long long int var_13 = -1466477802868167325LL;
long long int var_14 = 4487846954893509128LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
