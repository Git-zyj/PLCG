#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7577734102242503901ULL;
long long int var_9 = -5682881898854329786LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)60301;
signed char var_19 = (signed char)-127;
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
