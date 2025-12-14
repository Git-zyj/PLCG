#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8176687336810820803ULL;
int var_1 = 388145763;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)18651;
unsigned long long int var_5 = 11271959833384619851ULL;
long long int var_6 = -2095415874119572169LL;
unsigned long long int var_8 = 16694686226800895717ULL;
int zero = 0;
unsigned long long int var_10 = 5537119345801181488ULL;
_Bool var_11 = (_Bool)0;
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
