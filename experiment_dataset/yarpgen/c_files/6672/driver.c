#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)107;
unsigned short var_5 = (unsigned short)27565;
int var_6 = 411892494;
unsigned long long int var_7 = 17839137358620211232ULL;
short var_9 = (short)13795;
int var_10 = -703286291;
long long int var_11 = 5854328549897015492LL;
int zero = 0;
unsigned short var_12 = (unsigned short)17719;
short var_13 = (short)-1934;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)52248;
void init() {
}

void checksum() {
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
