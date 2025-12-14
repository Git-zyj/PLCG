#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-1;
short var_7 = (short)15373;
long long int var_10 = 413124296155973023LL;
unsigned long long int var_12 = 3327779042268037896ULL;
unsigned char var_13 = (unsigned char)87;
int zero = 0;
signed char var_18 = (signed char)-58;
_Bool var_19 = (_Bool)1;
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
