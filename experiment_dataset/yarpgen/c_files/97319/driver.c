#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1964980218;
int var_4 = 82832583;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)50445;
int var_10 = -111688633;
unsigned short var_11 = (unsigned short)38961;
signed char var_12 = (signed char)12;
int var_13 = -1887825152;
int zero = 0;
unsigned long long int var_15 = 17639712298253528856ULL;
unsigned long long int var_16 = 5060556499431941884ULL;
int var_17 = -714154843;
signed char var_18 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
