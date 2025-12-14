#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28725;
short var_3 = (short)9498;
unsigned short var_4 = (unsigned short)54448;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)96;
short var_13 = (short)28573;
long long int var_14 = -770177996334906766LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
