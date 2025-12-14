#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3685;
unsigned long long int var_1 = 3942413508238659651ULL;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-2396;
int zero = 0;
signed char var_12 = (signed char)82;
unsigned long long int var_13 = 12353030695127269732ULL;
int var_14 = -1897153369;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
