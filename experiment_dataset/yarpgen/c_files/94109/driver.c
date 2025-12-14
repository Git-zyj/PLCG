#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6102782399311553960LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 109388343U;
unsigned short var_6 = (unsigned short)20422;
int var_7 = 116666577;
int zero = 0;
signed char var_10 = (signed char)-60;
short var_11 = (short)10824;
unsigned short var_12 = (unsigned short)3341;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
