#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14550;
unsigned char var_1 = (unsigned char)204;
signed char var_2 = (signed char)85;
long long int var_3 = -2038265591530885540LL;
_Bool var_7 = (_Bool)1;
int var_9 = 881467895;
int zero = 0;
unsigned long long int var_16 = 7533280057378721454ULL;
unsigned int var_17 = 3447557190U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
