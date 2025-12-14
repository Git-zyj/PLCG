#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 864396134306849040ULL;
int var_3 = -55994954;
signed char var_8 = (signed char)48;
long long int var_9 = -8375214707593078778LL;
int zero = 0;
unsigned short var_10 = (unsigned short)59734;
long long int var_11 = -4017167482246881010LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
