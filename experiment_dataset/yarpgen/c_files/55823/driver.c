#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8617781829439386648LL;
_Bool var_4 = (_Bool)1;
int var_5 = 227296910;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)116;
unsigned char var_11 = (unsigned char)210;
int zero = 0;
short var_19 = (short)24048;
unsigned short var_20 = (unsigned short)47040;
signed char var_21 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
