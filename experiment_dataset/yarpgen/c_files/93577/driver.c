#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50023;
unsigned long long int var_3 = 3449741749854339582ULL;
short var_6 = (short)-10209;
unsigned short var_9 = (unsigned short)52460;
unsigned char var_11 = (unsigned char)4;
unsigned int var_13 = 1205869785U;
int zero = 0;
unsigned short var_18 = (unsigned short)8369;
unsigned short var_19 = (unsigned short)31537;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15043310008813390376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
