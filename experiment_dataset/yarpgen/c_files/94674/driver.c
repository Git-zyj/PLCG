#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8135573060753859511LL;
signed char var_8 = (signed char)91;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6304180549486616706LL;
short var_19 = (short)11816;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
