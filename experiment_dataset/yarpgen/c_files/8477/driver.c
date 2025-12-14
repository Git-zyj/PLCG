#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)149;
unsigned int var_7 = 258432465U;
unsigned char var_13 = (unsigned char)93;
int zero = 0;
long long int var_16 = 2363683036850684104LL;
unsigned long long int var_17 = 1674649235235445471ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
