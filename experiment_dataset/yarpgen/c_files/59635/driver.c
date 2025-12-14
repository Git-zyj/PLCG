#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-14261;
unsigned long long int var_10 = 10098615856586306241ULL;
int var_11 = -307808492;
unsigned int var_15 = 3783493389U;
int zero = 0;
unsigned short var_16 = (unsigned short)9358;
short var_17 = (short)14308;
short var_18 = (short)-9796;
unsigned short var_19 = (unsigned short)13405;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
