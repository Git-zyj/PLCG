#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 134189202;
unsigned long long int var_8 = 15760449936493411323ULL;
_Bool var_10 = (_Bool)0;
signed char var_18 = (signed char)52;
int zero = 0;
long long int var_20 = 6724912822650331543LL;
signed char var_21 = (signed char)77;
int var_22 = 747660434;
void init() {
}

void checksum() {
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
