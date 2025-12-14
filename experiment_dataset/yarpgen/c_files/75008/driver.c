#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-47;
int var_13 = 1495023182;
long long int var_18 = 4816597326549327114LL;
int zero = 0;
long long int var_19 = 6390349500429666438LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)11245;
_Bool var_22 = (_Bool)1;
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
