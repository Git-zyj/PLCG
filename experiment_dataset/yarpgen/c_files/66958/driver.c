#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63356;
long long int var_7 = 7341829277839188663LL;
signed char var_11 = (signed char)-118;
long long int var_12 = 7876602573697615295LL;
long long int var_14 = -3803711635425222069LL;
long long int var_17 = 2487921271052466553LL;
int zero = 0;
unsigned long long int var_18 = 15712494624526177966ULL;
unsigned short var_19 = (unsigned short)7676;
void init() {
}

void checksum() {
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
