#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)13647;
_Bool var_11 = (_Bool)1;
int var_13 = -1073902120;
long long int var_14 = -7649396524177260817LL;
int zero = 0;
long long int var_16 = 7947315707903583685LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11778055093752431931ULL;
unsigned char var_19 = (unsigned char)240;
unsigned char var_20 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
