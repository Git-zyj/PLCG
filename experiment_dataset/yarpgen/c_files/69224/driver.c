#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1231924599U;
long long int var_3 = -2093264695359384919LL;
unsigned short var_4 = (unsigned short)27943;
long long int var_5 = -4886972393417557930LL;
int var_7 = 612554599;
unsigned short var_10 = (unsigned short)31880;
unsigned char var_12 = (unsigned char)249;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8954728649018924809LL;
short var_15 = (short)-24142;
unsigned short var_16 = (unsigned short)59949;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
