#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-76;
signed char var_5 = (signed char)106;
unsigned char var_9 = (unsigned char)207;
unsigned int var_10 = 191292527U;
int var_12 = -447752869;
short var_14 = (short)2845;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)56;
int var_17 = -1700236191;
long long int var_18 = 7385165947760480146LL;
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
