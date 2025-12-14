#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)77;
short var_7 = (short)-3055;
unsigned int var_8 = 4173565654U;
long long int var_9 = 619596848532894977LL;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
unsigned char var_19 = (unsigned char)207;
void init() {
}

void checksum() {
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
