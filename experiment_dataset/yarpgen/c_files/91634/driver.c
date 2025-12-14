#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26369;
signed char var_3 = (signed char)28;
signed char var_5 = (signed char)-89;
long long int var_6 = -7992732546140188618LL;
long long int var_9 = -8279717682469747132LL;
unsigned char var_11 = (unsigned char)117;
int zero = 0;
long long int var_12 = 8990872912753806060LL;
unsigned char var_13 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
