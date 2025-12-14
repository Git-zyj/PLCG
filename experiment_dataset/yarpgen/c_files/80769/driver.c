#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1361385791285422370LL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)66;
signed char var_8 = (signed char)22;
unsigned short var_9 = (unsigned short)7968;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12345956650971004506ULL;
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
