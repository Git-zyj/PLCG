#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1315883044;
short var_3 = (short)1142;
long long int var_6 = -3838424154804792372LL;
long long int var_8 = 4518420106655597246LL;
int var_15 = -2075343623;
unsigned short var_18 = (unsigned short)40193;
int zero = 0;
unsigned int var_20 = 109960196U;
long long int var_21 = -5001289301515415897LL;
short var_22 = (short)23498;
long long int var_23 = -138470447731876319LL;
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
