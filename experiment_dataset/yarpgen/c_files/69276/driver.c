#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29163;
unsigned char var_1 = (unsigned char)174;
int var_3 = -389141963;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 970690989674140312ULL;
unsigned long long int var_9 = 7230992813434577870ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)13274;
unsigned short var_14 = (unsigned short)49877;
short var_15 = (short)17213;
long long int var_16 = -781161072621912408LL;
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
