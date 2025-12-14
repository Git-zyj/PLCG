#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1145807945U;
unsigned char var_5 = (unsigned char)152;
unsigned char var_6 = (unsigned char)186;
signed char var_9 = (signed char)111;
unsigned int var_17 = 239199335U;
int zero = 0;
long long int var_18 = 138315553448689615LL;
_Bool var_19 = (_Bool)0;
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
