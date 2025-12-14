#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1707146703U;
unsigned int var_3 = 3810153917U;
unsigned int var_5 = 2336471334U;
signed char var_6 = (signed char)-3;
long long int var_8 = 1264728668733859578LL;
int var_9 = -1615392041;
short var_10 = (short)-1629;
int var_12 = 588749134;
short var_13 = (short)2678;
unsigned int var_14 = 2941588798U;
unsigned int var_16 = 2792724822U;
long long int var_17 = -6373372414790590970LL;
int zero = 0;
int var_18 = 1511189230;
long long int var_19 = -8830376414767092379LL;
long long int var_20 = 9045001694314039619LL;
long long int var_21 = 3967240423461575329LL;
signed char var_22 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
