#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60213;
unsigned short var_2 = (unsigned short)29332;
unsigned char var_6 = (unsigned char)109;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 6704506686539508908ULL;
unsigned int var_12 = 3829296146U;
long long int var_14 = 3835611837709697394LL;
int zero = 0;
unsigned int var_17 = 1544161958U;
_Bool var_18 = (_Bool)0;
short var_19 = (short)11301;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
