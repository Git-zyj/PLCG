#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 437880681;
long long int var_2 = 3702173121870241278LL;
unsigned long long int var_6 = 10716969008597258460ULL;
unsigned short var_8 = (unsigned short)30356;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)237;
int zero = 0;
int var_15 = -1005566587;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
