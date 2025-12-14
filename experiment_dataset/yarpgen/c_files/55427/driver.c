#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9781269114713405739ULL;
unsigned long long int var_3 = 15738679916858149469ULL;
short var_4 = (short)-22694;
signed char var_9 = (signed char)-125;
_Bool var_10 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2286098786U;
signed char var_19 = (signed char)21;
unsigned char var_20 = (unsigned char)37;
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
