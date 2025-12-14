#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
signed char var_4 = (signed char)-32;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)45569;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)78;
signed char var_13 = (signed char)103;
short var_14 = (short)-20587;
_Bool var_15 = (_Bool)0;
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
