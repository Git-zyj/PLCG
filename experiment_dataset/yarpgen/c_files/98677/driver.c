#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
long long int var_2 = -3969834145813674503LL;
unsigned int var_3 = 1761603324U;
_Bool var_4 = (_Bool)1;
int var_7 = -1790942599;
short var_8 = (short)-15841;
short var_11 = (short)-7249;
int zero = 0;
unsigned int var_13 = 716407087U;
signed char var_14 = (signed char)93;
unsigned long long int var_15 = 18082291222446170098ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
