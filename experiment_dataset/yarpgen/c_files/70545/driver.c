#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3042691733743017632ULL;
short var_5 = (short)-30674;
unsigned long long int var_6 = 16862195306247424456ULL;
long long int var_7 = 8988559608363927391LL;
unsigned int var_8 = 202830092U;
long long int var_11 = 7942411219796276841LL;
int zero = 0;
short var_12 = (short)-26387;
unsigned short var_13 = (unsigned short)54289;
_Bool var_14 = (_Bool)0;
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
