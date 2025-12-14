#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5222973515823727061LL;
unsigned int var_7 = 2594992549U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)49380;
unsigned int var_14 = 2652998327U;
unsigned int var_15 = 703297248U;
unsigned int var_16 = 3156634273U;
int zero = 0;
unsigned short var_17 = (unsigned short)3907;
long long int var_18 = 1960670834274992757LL;
void init() {
}

void checksum() {
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
