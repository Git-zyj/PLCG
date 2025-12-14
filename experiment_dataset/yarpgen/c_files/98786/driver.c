#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46420;
unsigned long long int var_5 = 186865307210152132ULL;
_Bool var_6 = (_Bool)1;
int var_8 = 1086113518;
signed char var_9 = (signed char)-54;
int zero = 0;
unsigned short var_15 = (unsigned short)18880;
long long int var_16 = -994421393487365278LL;
long long int var_17 = 4755218965104344218LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
