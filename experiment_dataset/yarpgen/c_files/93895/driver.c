#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48827;
unsigned char var_2 = (unsigned char)143;
signed char var_4 = (signed char)72;
long long int var_8 = 3891199545709185020LL;
short var_10 = (short)12505;
unsigned short var_13 = (unsigned short)11515;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 2089812744U;
int zero = 0;
short var_19 = (short)25661;
short var_20 = (short)-822;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
