#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -923657737835288520LL;
_Bool var_6 = (_Bool)1;
unsigned short var_15 = (unsigned short)53812;
int var_16 = -1997521495;
int zero = 0;
unsigned long long int var_17 = 1049964609173361728ULL;
signed char var_18 = (signed char)18;
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
