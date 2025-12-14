#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2941186962U;
unsigned int var_2 = 4009818371U;
unsigned int var_3 = 2195061689U;
int var_4 = 1483588294;
unsigned int var_5 = 3378229996U;
unsigned short var_6 = (unsigned short)47565;
signed char var_8 = (signed char)123;
short var_12 = (short)-18111;
long long int var_13 = 744019397501253449LL;
int zero = 0;
unsigned long long int var_14 = 3618107128681728144ULL;
signed char var_15 = (signed char)-24;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
