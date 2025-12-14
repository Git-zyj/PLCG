#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1044735082U;
unsigned int var_3 = 2454678591U;
signed char var_4 = (signed char)71;
long long int var_5 = -3924938546647568978LL;
unsigned int var_6 = 677679117U;
short var_7 = (short)7389;
short var_8 = (short)27220;
long long int var_9 = 1123426982517616952LL;
int zero = 0;
unsigned int var_11 = 3159829236U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)242;
signed char var_14 = (signed char)5;
unsigned long long int var_15 = 7586304836287190643ULL;
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
