#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 541659476;
unsigned short var_6 = (unsigned short)11567;
unsigned long long int var_9 = 4189089868129765155ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)48172;
int zero = 0;
unsigned int var_16 = 1646300584U;
signed char var_17 = (signed char)97;
unsigned int var_18 = 1640867310U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
