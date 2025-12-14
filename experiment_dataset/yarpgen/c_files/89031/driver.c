#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10660292943869043000ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)31;
short var_9 = (short)21113;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-35;
signed char var_17 = (signed char)-113;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)5466;
unsigned int var_20 = 1723694779U;
void init() {
}

void checksum() {
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
