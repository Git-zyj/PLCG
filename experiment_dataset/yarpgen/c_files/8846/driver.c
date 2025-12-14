#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3713672350066725512ULL;
_Bool var_4 = (_Bool)1;
int zero = 0;
long long int var_17 = -6236015727566917131LL;
signed char var_18 = (signed char)75;
unsigned short var_19 = (unsigned short)19587;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
