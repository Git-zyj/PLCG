#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 468043187;
_Bool var_1 = (_Bool)0;
long long int var_2 = -8910877695877501414LL;
long long int var_3 = -2876939154691486177LL;
short var_7 = (short)-9627;
unsigned int var_8 = 2950310075U;
unsigned long long int var_9 = 2486648483391600325ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)106;
int var_11 = -705011995;
signed char var_12 = (signed char)50;
unsigned long long int var_13 = 15211051804151772249ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
