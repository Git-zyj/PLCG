#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13746422891277695996ULL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)20252;
unsigned long long int var_6 = 12598102243634040631ULL;
long long int var_7 = -6177123215325137199LL;
long long int var_14 = 4066692403286853617LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)47364;
unsigned char var_19 = (unsigned char)107;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
