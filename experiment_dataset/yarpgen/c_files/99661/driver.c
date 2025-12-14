#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8045;
unsigned char var_3 = (unsigned char)157;
unsigned char var_5 = (unsigned char)79;
long long int var_6 = -3262207958523411445LL;
unsigned long long int var_7 = 5593452361124364606ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1275105358;
unsigned long long int var_12 = 4933196346803133061ULL;
_Bool var_13 = (_Bool)0;
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
