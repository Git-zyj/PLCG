#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4027920036663487965ULL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1014237201U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4149601993U;
unsigned long long int var_12 = 16118314090082918079ULL;
unsigned long long int var_13 = 9620433174743164172ULL;
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
