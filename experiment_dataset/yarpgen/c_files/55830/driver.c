#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1328254323U;
long long int var_1 = -1254149595753390729LL;
unsigned long long int var_4 = 12567264687218971896ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_16 = (unsigned char)165;
unsigned short var_18 = (unsigned short)2922;
int zero = 0;
signed char var_20 = (signed char)119;
signed char var_21 = (signed char)95;
long long int var_22 = 8547540067960806267LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
