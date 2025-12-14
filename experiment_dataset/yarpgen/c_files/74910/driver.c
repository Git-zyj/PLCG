#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2907911071068372248LL;
signed char var_1 = (signed char)86;
int var_2 = 2086338455;
signed char var_3 = (signed char)-82;
long long int var_12 = -7874417726443760233LL;
int zero = 0;
long long int var_15 = -6554292775149030302LL;
long long int var_16 = -3116626850679994887LL;
unsigned short var_17 = (unsigned short)59146;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
