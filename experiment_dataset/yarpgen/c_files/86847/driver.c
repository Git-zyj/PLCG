#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-92;
int var_4 = 1713901484;
short var_5 = (short)8556;
unsigned long long int var_7 = 2319845732946519386ULL;
signed char var_8 = (signed char)92;
signed char var_13 = (signed char)-115;
unsigned long long int var_16 = 5399224045096102764ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3486431354647259560LL;
int zero = 0;
long long int var_20 = 1877522241336893683LL;
long long int var_21 = -5470435847577157143LL;
signed char var_22 = (signed char)34;
short var_23 = (short)24865;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
