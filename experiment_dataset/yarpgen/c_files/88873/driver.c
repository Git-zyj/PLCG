#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4223351774U;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)123;
int zero = 0;
long long int var_14 = -875256762329644766LL;
long long int var_15 = 8752435846724537602LL;
void init() {
}

void checksum() {
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
