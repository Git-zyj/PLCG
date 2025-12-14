#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8995755287737346ULL;
_Bool var_2 = (_Bool)1;
signed char var_8 = (signed char)66;
long long int var_9 = 6640725371723979052LL;
int var_10 = -874777064;
unsigned int var_11 = 3868655769U;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = 1769694524;
int var_16 = 2066103848;
unsigned char var_17 = (unsigned char)117;
long long int var_18 = 1892853755937201824LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
