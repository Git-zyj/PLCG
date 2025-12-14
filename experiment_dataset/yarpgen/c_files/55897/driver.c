#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3865233187U;
signed char var_8 = (signed char)-44;
short var_10 = (short)-7812;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 6411045776571599583LL;
unsigned long long int var_21 = 1139442310801407239ULL;
void init() {
}

void checksum() {
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
