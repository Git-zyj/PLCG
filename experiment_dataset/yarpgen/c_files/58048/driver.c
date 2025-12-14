#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
int var_2 = 2089378986;
long long int var_9 = 4421558312406622129LL;
int zero = 0;
long long int var_11 = -2770430704514652824LL;
long long int var_12 = 2305066806780291766LL;
long long int var_13 = -4559157444386092459LL;
void init() {
}

void checksum() {
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
