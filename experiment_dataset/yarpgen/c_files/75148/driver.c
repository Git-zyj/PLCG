#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9591622206166022485ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_16 = 5908646246207796882ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 3150942359U;
_Bool var_21 = (_Bool)1;
int var_22 = 963948083;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
