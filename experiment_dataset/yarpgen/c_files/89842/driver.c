#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2732516044U;
long long int var_3 = 1294518045770414852LL;
long long int var_4 = 2341660183156860121LL;
int var_5 = 1437130593;
short var_12 = (short)-3306;
int zero = 0;
unsigned char var_16 = (unsigned char)61;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3932125234U;
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
