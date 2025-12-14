#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 677705046;
short var_3 = (short)20867;
signed char var_4 = (signed char)29;
short var_6 = (short)-26669;
short var_8 = (short)-14348;
signed char var_9 = (signed char)10;
signed char var_10 = (signed char)117;
unsigned long long int var_11 = 8964650513595681080ULL;
signed char var_12 = (signed char)-87;
unsigned int var_13 = 758088007U;
int zero = 0;
unsigned int var_14 = 687820176U;
signed char var_15 = (signed char)-22;
unsigned long long int var_16 = 18053755163394069102ULL;
unsigned int var_17 = 1181213662U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
