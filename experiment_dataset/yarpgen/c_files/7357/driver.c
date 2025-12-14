#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38086;
int var_3 = 1394729453;
long long int var_6 = -3284172122685492304LL;
int var_7 = -490453994;
_Bool var_8 = (_Bool)1;
int var_14 = 1174041217;
int zero = 0;
unsigned int var_15 = 3338354090U;
unsigned int var_16 = 1393979427U;
int var_17 = 713386740;
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
