#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6817322732992196325LL;
long long int var_2 = -2391950606497248579LL;
signed char var_4 = (signed char)-86;
signed char var_6 = (signed char)-12;
long long int var_15 = 745400320025303141LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
