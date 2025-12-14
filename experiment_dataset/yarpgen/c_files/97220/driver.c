#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
long long int var_3 = -3716896530788496986LL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)84;
signed char var_8 = (signed char)-35;
signed char var_10 = (signed char)-56;
int zero = 0;
long long int var_12 = -7121083261074453711LL;
long long int var_13 = 861207102049596856LL;
unsigned int var_14 = 2532594601U;
void init() {
}

void checksum() {
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
