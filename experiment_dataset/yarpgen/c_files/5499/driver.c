#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62236;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_4 = 1815116394;
long long int var_9 = -3170030519631519243LL;
int zero = 0;
unsigned int var_10 = 3563129795U;
signed char var_11 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
