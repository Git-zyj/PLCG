#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8611844749367952738ULL;
unsigned char var_9 = (unsigned char)240;
unsigned char var_11 = (unsigned char)73;
unsigned long long int var_13 = 859377187438390768ULL;
_Bool var_14 = (_Bool)0;
long long int var_16 = -4915024680574791014LL;
long long int var_19 = 5852295397589663891LL;
int zero = 0;
long long int var_20 = -83613648913326354LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
