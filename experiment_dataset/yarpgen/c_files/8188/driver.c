#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 8044243U;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)242;
unsigned long long int var_12 = 5497373644615811801ULL;
unsigned char var_13 = (unsigned char)174;
unsigned short var_15 = (unsigned short)27840;
unsigned int var_18 = 739192707U;
int zero = 0;
unsigned int var_19 = 1936910900U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3125040706U;
unsigned short var_22 = (unsigned short)25931;
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
