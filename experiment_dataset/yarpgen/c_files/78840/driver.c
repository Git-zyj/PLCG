#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16997901629603340428ULL;
unsigned char var_1 = (unsigned char)101;
signed char var_16 = (signed char)116;
int zero = 0;
signed char var_18 = (signed char)17;
long long int var_19 = -1181778427417414164LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)32346;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
