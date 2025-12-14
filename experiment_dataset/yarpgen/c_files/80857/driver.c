#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
long long int var_2 = 3930142061759043748LL;
unsigned int var_5 = 1523910903U;
int var_6 = 1090219525;
unsigned int var_8 = 1670303338U;
signed char var_10 = (signed char)108;
int zero = 0;
unsigned short var_11 = (unsigned short)31204;
unsigned short var_12 = (unsigned short)62319;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
