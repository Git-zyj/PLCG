#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1862429021;
int var_3 = 628577645;
short var_4 = (short)-4833;
long long int var_5 = -8519057615348209237LL;
unsigned short var_6 = (unsigned short)1456;
long long int var_8 = -2006941453909353558LL;
unsigned short var_9 = (unsigned short)49437;
unsigned int var_10 = 2997928599U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 817562442U;
short var_13 = (short)-17454;
void init() {
}

void checksum() {
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
