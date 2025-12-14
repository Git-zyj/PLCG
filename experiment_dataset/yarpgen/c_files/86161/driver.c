#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)64;
unsigned char var_6 = (unsigned char)14;
unsigned int var_7 = 2351993676U;
signed char var_9 = (signed char)-41;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-5150;
long long int var_17 = 2219353487183969510LL;
int zero = 0;
unsigned int var_18 = 2071523020U;
signed char var_19 = (signed char)120;
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
