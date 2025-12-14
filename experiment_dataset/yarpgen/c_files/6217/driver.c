#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
unsigned short var_6 = (unsigned short)57501;
long long int var_8 = 6269533272321753660LL;
unsigned int var_9 = 2191204510U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 1295437575923785891ULL;
unsigned char var_20 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
