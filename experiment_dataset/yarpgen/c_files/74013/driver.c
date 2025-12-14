#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)16444;
unsigned long long int var_8 = 737845500061058408ULL;
signed char var_10 = (signed char)-92;
unsigned long long int var_11 = 15623193297445534978ULL;
unsigned long long int var_12 = 4187009557195424734ULL;
long long int var_18 = -2961003696535525042LL;
int zero = 0;
long long int var_19 = 177387933378023683LL;
int var_20 = -1029650880;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
