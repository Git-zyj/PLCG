#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 10646270180953850233ULL;
unsigned long long int var_13 = 1787898633708028540ULL;
short var_15 = (short)21259;
int zero = 0;
long long int var_16 = 2338981336570549341LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -2012630644923633491LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
