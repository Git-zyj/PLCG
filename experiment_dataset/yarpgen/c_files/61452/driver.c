#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7786733285521152965LL;
unsigned long long int var_3 = 9601724493268338067ULL;
unsigned short var_6 = (unsigned short)36635;
signed char var_9 = (signed char)6;
long long int var_10 = -4299123205593770356LL;
unsigned char var_11 = (unsigned char)228;
int zero = 0;
int var_12 = 266666516;
_Bool var_13 = (_Bool)1;
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
