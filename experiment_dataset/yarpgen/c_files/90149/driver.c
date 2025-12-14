#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4621655764248019864LL;
unsigned char var_4 = (unsigned char)64;
int var_5 = 1795730876;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-25570;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)210;
unsigned int var_12 = 229654808U;
_Bool var_13 = (_Bool)0;
long long int var_14 = -4427306603480606965LL;
int var_15 = 1335221224;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
