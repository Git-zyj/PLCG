#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2877460508U;
int var_3 = -1505894308;
unsigned long long int var_5 = 1857228496784023569ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)36;
_Bool var_12 = (_Bool)1;
short var_14 = (short)25090;
short var_18 = (short)11870;
int zero = 0;
unsigned int var_19 = 3849945202U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-25670;
long long int var_22 = 5313958871658418841LL;
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
