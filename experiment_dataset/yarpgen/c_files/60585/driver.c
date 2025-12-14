#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22683;
unsigned char var_1 = (unsigned char)252;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)121;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)20168;
int var_8 = -1606507657;
int zero = 0;
unsigned int var_11 = 4034309386U;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2515434236649219982LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
