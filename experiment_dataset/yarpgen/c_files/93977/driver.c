#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28643;
long long int var_1 = 5759633507432641896LL;
long long int var_7 = 3781298385026563544LL;
signed char var_10 = (signed char)-19;
long long int var_11 = -2660258864468959276LL;
long long int var_12 = -7182861903363867984LL;
long long int var_13 = -4172523446228035441LL;
int zero = 0;
unsigned char var_14 = (unsigned char)216;
long long int var_15 = 4301074518527598678LL;
short var_16 = (short)2885;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
