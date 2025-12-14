#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
unsigned short var_5 = (unsigned short)50931;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)3922;
short var_11 = (short)-19924;
signed char var_12 = (signed char)-63;
int zero = 0;
long long int var_17 = -3358218406845436667LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
