#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1063971619;
short var_3 = (short)9936;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)4349;
long long int var_9 = 955176348580464991LL;
short var_10 = (short)27689;
int zero = 0;
unsigned char var_11 = (unsigned char)192;
signed char var_12 = (signed char)101;
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
