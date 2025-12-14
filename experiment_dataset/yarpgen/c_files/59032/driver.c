#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6021;
int var_3 = -2082281097;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)39;
int var_9 = 393945504;
unsigned long long int var_10 = 1201793286171915647ULL;
unsigned char var_12 = (unsigned char)20;
int zero = 0;
short var_13 = (short)-11120;
signed char var_14 = (signed char)89;
void init() {
}

void checksum() {
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
