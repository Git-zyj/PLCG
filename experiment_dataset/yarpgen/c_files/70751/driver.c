#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
long long int var_3 = 8817827428488066465LL;
unsigned int var_4 = 3880859931U;
unsigned short var_5 = (unsigned short)3349;
unsigned int var_6 = 271050088U;
short var_7 = (short)-5132;
int var_8 = -1166682124;
long long int var_9 = 754478976137244689LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-22652;
int zero = 0;
unsigned int var_14 = 3702678201U;
short var_15 = (short)-1406;
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
