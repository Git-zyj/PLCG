#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1960520225935330233LL;
short var_1 = (short)-30543;
unsigned short var_2 = (unsigned short)51766;
signed char var_4 = (signed char)-76;
short var_10 = (short)-7154;
int zero = 0;
long long int var_11 = -8980490344522690665LL;
unsigned int var_12 = 3278331998U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)66;
unsigned short var_15 = (unsigned short)619;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
