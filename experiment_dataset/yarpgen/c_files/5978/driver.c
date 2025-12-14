#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 920012258760951435LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2984327997U;
short var_5 = (short)32565;
unsigned long long int var_7 = 4349342519368771636ULL;
long long int var_11 = -1140800838597288300LL;
unsigned short var_16 = (unsigned short)61765;
signed char var_17 = (signed char)7;
signed char var_18 = (signed char)53;
int zero = 0;
short var_19 = (short)-27558;
short var_20 = (short)-22694;
unsigned int var_21 = 2004627092U;
long long int var_22 = 1347374673083120343LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
