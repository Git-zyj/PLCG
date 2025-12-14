#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5027551673285679143ULL;
unsigned long long int var_7 = 16977352150806893462ULL;
short var_8 = (short)-27578;
unsigned long long int var_9 = 3444920965660980183ULL;
long long int var_13 = -387050104682706921LL;
unsigned long long int var_15 = 5286475881922607800ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)238;
_Bool var_21 = (_Bool)0;
long long int var_22 = 205331649513087585LL;
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
