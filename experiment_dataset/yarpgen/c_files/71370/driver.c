#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4684168391189019293LL;
unsigned char var_14 = (unsigned char)112;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15983523243691885598ULL;
signed char var_21 = (signed char)32;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
