#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1579464941U;
unsigned int var_7 = 3476364094U;
unsigned char var_8 = (unsigned char)199;
short var_10 = (short)28621;
int var_14 = -1380270271;
int zero = 0;
unsigned long long int var_18 = 257548445615419220ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)26374;
short var_21 = (short)25932;
signed char var_22 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
