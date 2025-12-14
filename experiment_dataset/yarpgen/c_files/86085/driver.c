#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
unsigned long long int var_2 = 5802332250214651262ULL;
signed char var_9 = (signed char)54;
unsigned int var_10 = 2719812925U;
unsigned long long int var_11 = 12197080132798498446ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 8670391865706645664ULL;
unsigned long long int var_15 = 9112390206511001206ULL;
long long int var_16 = -8614320738191491435LL;
long long int var_17 = -497001397214528921LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
