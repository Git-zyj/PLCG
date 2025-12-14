#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
int var_1 = 488512608;
short var_2 = (short)21638;
unsigned int var_3 = 4282823364U;
unsigned long long int var_4 = 2549208552174629821ULL;
unsigned short var_11 = (unsigned short)7653;
long long int var_12 = -6696236927185417900LL;
unsigned long long int var_14 = 6242374652161123927ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3621614236U;
unsigned long long int var_18 = 6856365601584918015ULL;
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
