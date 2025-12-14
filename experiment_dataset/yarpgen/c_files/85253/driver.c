#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3351675574531099297LL;
int var_3 = -1723936925;
unsigned char var_6 = (unsigned char)193;
unsigned short var_7 = (unsigned short)60877;
int var_9 = 1717558960;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)28670;
signed char var_17 = (signed char)-117;
short var_18 = (short)27079;
unsigned int var_19 = 306938926U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
