#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
unsigned int var_5 = 3687584098U;
unsigned long long int var_6 = 1900563336117294929ULL;
unsigned int var_8 = 613383063U;
unsigned int var_9 = 1839484351U;
int zero = 0;
short var_14 = (short)28052;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1761422451U;
long long int var_17 = 3270394565262325576LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
