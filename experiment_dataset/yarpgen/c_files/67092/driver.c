#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30661;
unsigned char var_3 = (unsigned char)4;
unsigned char var_4 = (unsigned char)248;
unsigned int var_9 = 2479688455U;
unsigned short var_11 = (unsigned short)59966;
unsigned long long int var_12 = 6123163287895117283ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7086414167884947651LL;
unsigned int var_15 = 2531174403U;
void init() {
}

void checksum() {
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
