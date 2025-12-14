#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4266326996104182375LL;
long long int var_1 = 7744553682731009428LL;
unsigned char var_2 = (unsigned char)84;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)6;
signed char var_13 = (signed char)-87;
unsigned short var_14 = (unsigned short)44560;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
