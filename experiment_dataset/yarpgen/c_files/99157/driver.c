#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 128070862U;
unsigned int var_5 = 3866755597U;
int var_6 = -979331874;
int var_7 = 159695824;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)27;
short var_13 = (short)26918;
unsigned char var_14 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
