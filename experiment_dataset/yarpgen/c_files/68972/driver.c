#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 823392520;
unsigned long long int var_7 = 2345657365573770974ULL;
short var_9 = (short)27266;
short var_11 = (short)3563;
unsigned int var_12 = 2687312444U;
long long int var_13 = 2919467535649990278LL;
short var_15 = (short)-31160;
short var_16 = (short)-4033;
unsigned short var_18 = (unsigned short)43507;
int zero = 0;
unsigned long long int var_20 = 9535713637671624651ULL;
int var_21 = -734060565;
short var_22 = (short)-10991;
int var_23 = -915501972;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
