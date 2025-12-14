#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2848189327U;
unsigned short var_5 = (unsigned short)8461;
long long int var_6 = -5081918381205833108LL;
int var_15 = -1226669579;
unsigned short var_17 = (unsigned short)47345;
unsigned long long int var_18 = 5208074967132158922ULL;
int zero = 0;
unsigned int var_19 = 2538624362U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)23649;
long long int var_22 = 143662049694318007LL;
signed char var_23 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
