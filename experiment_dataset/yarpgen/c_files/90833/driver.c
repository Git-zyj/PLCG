#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
_Bool var_3 = (_Bool)0;
short var_11 = (short)-19377;
short var_12 = (short)17304;
unsigned char var_13 = (unsigned char)147;
int zero = 0;
unsigned int var_14 = 3167873542U;
long long int var_15 = 4137359471186597444LL;
signed char var_16 = (signed char)111;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
