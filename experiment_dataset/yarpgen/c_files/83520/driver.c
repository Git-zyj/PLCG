#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2145526024;
unsigned long long int var_1 = 5183360013601811373ULL;
unsigned long long int var_2 = 3887491786540635747ULL;
long long int var_3 = 5133298430345225455LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 2262802767322903797ULL;
long long int var_7 = -7727131488892509420LL;
unsigned short var_8 = (unsigned short)27799;
unsigned long long int var_11 = 5419434606655640389ULL;
unsigned long long int var_12 = 17135427278277531728ULL;
int zero = 0;
unsigned long long int var_13 = 9420503971153528917ULL;
unsigned short var_14 = (unsigned short)5517;
short var_15 = (short)-7260;
int var_16 = -1172060480;
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
