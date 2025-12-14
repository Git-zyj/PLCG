#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1063445743;
unsigned short var_3 = (unsigned short)28684;
int var_6 = -1956467281;
short var_7 = (short)-20327;
int var_8 = 1404162809;
long long int var_10 = 2011946575195370974LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
