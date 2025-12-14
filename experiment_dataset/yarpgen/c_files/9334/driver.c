#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
signed char var_11 = (signed char)29;
unsigned short var_13 = (unsigned short)43998;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 8777960734204336469ULL;
short var_21 = (short)20434;
unsigned int var_22 = 592941973U;
long long int var_23 = 6988823354674671758LL;
long long int var_24 = 1617552054222073809LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
