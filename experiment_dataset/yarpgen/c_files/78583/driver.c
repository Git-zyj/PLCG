#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 854132470;
unsigned long long int var_5 = 112635883295901779ULL;
short var_6 = (short)-5424;
unsigned int var_7 = 1191787454U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1574015459U;
int zero = 0;
long long int var_12 = -950319887919774305LL;
unsigned long long int var_13 = 2639210202739098394ULL;
signed char var_14 = (signed char)-78;
unsigned char var_15 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
