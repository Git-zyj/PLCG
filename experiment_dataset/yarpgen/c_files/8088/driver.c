#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7670;
signed char var_2 = (signed char)102;
signed char var_5 = (signed char)-11;
signed char var_6 = (signed char)69;
int var_7 = -886495582;
long long int var_8 = 6548611054683996166LL;
short var_9 = (short)9838;
short var_12 = (short)-18232;
int var_14 = -1902763456;
int var_16 = -1108795451;
unsigned short var_18 = (unsigned short)44287;
signed char var_19 = (signed char)19;
int zero = 0;
signed char var_20 = (signed char)-10;
signed char var_21 = (signed char)72;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
