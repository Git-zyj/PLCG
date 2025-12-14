#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6221058941341188941LL;
long long int var_6 = 7019703854298978995LL;
unsigned int var_9 = 4001074553U;
long long int var_10 = 577910316787555402LL;
signed char var_12 = (signed char)(-127 - 1);
_Bool var_15 = (_Bool)0;
unsigned short var_19 = (unsigned short)33449;
int zero = 0;
short var_20 = (short)14896;
signed char var_21 = (signed char)83;
long long int var_22 = -160615818300374206LL;
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
