#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4142448655406679445ULL;
unsigned char var_2 = (unsigned char)177;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-45;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 387606176U;
long long int var_10 = 4817654714684472719LL;
int var_12 = -906984065;
int zero = 0;
unsigned char var_13 = (unsigned char)91;
long long int var_14 = 2447742517357437518LL;
unsigned int var_15 = 4031034900U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
