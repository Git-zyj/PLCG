#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 228553296750949858LL;
unsigned int var_8 = 2909380822U;
unsigned int var_19 = 1271490394U;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-1251;
unsigned int var_22 = 1805065275U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
