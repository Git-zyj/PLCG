#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1387582520U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-946;
unsigned char var_10 = (unsigned char)246;
unsigned long long int var_11 = 6967836829479421128ULL;
signed char var_17 = (signed char)-71;
int zero = 0;
unsigned long long int var_20 = 5970155618622135268ULL;
signed char var_21 = (signed char)78;
long long int var_22 = 6078508766405480148LL;
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
