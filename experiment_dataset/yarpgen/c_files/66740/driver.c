#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
unsigned long long int var_1 = 14608001947968662962ULL;
signed char var_6 = (signed char)92;
signed char var_7 = (signed char)9;
unsigned long long int var_8 = 6267952337640055629ULL;
int var_9 = -1332834219;
int zero = 0;
unsigned long long int var_10 = 12675530118960621911ULL;
unsigned long long int var_11 = 6295675967430137180ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
