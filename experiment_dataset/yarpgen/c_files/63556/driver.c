#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 10150359238643744186ULL;
unsigned short var_19 = (unsigned short)47844;
int zero = 0;
signed char var_20 = (signed char)-74;
int var_21 = -1059017011;
long long int var_22 = 9008750895974366003LL;
void init() {
}

void checksum() {
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
