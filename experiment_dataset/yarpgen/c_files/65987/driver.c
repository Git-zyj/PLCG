#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21871;
signed char var_3 = (signed char)-101;
unsigned short var_5 = (unsigned short)14859;
unsigned short var_6 = (unsigned short)61156;
long long int var_7 = 3487064352926626801LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
