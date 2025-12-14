#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57466;
short var_4 = (short)2974;
int var_5 = 745344014;
long long int var_7 = 6624638730971652395LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-6433;
long long int var_10 = -167918180124215211LL;
int zero = 0;
signed char var_12 = (signed char)-33;
unsigned long long int var_13 = 17971916448150754094ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
