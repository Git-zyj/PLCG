#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)241;
long long int var_5 = -8139464817638366637LL;
unsigned long long int var_6 = 15912935149890866233ULL;
unsigned long long int var_8 = 9137325580066715576ULL;
signed char var_10 = (signed char)17;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 12200973364272075219ULL;
int var_21 = 996059821;
unsigned char var_22 = (unsigned char)245;
unsigned short var_23 = (unsigned short)12220;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
