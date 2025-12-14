#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43334;
unsigned char var_4 = (unsigned char)222;
unsigned int var_5 = 460944081U;
long long int var_6 = 18549003318112812LL;
unsigned char var_9 = (unsigned char)54;
unsigned long long int var_10 = 14494358643201268591ULL;
int var_12 = -796912312;
short var_14 = (short)12336;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1324003493;
unsigned long long int var_17 = 16096235741991277010ULL;
short var_18 = (short)-10183;
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
