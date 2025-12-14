#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)50891;
unsigned short var_3 = (unsigned short)31980;
int var_5 = 1732782645;
unsigned int var_7 = 2323982821U;
int var_8 = 2101149289;
unsigned int var_9 = 656676974U;
int zero = 0;
long long int var_10 = 4576056999493905755LL;
long long int var_11 = -296349084066617483LL;
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
