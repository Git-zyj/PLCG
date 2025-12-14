#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3305380100U;
short var_4 = (short)-3478;
unsigned int var_5 = 2629229584U;
unsigned int var_6 = 1064986888U;
unsigned long long int var_7 = 6625931763974731863ULL;
unsigned char var_8 = (unsigned char)175;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3097555354U;
short var_14 = (short)15963;
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
