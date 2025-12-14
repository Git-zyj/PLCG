#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)41726;
int var_3 = -1535266479;
short var_5 = (short)-25545;
unsigned short var_6 = (unsigned short)57261;
int var_7 = -965395426;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 2898812698548569315ULL;
unsigned int var_11 = 519098725U;
int var_12 = 1682290310;
long long int var_13 = -1434925679163657917LL;
unsigned short var_14 = (unsigned short)52676;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
