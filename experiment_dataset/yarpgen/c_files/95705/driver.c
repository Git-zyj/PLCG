#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1910268607;
unsigned char var_4 = (unsigned char)126;
signed char var_6 = (signed char)24;
unsigned char var_7 = (unsigned char)128;
int var_8 = 916963752;
unsigned int var_9 = 3309032266U;
unsigned int var_10 = 860772382U;
int zero = 0;
signed char var_13 = (signed char)-11;
long long int var_14 = 9093299835484356547LL;
_Bool var_15 = (_Bool)1;
int var_16 = -1185707496;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
