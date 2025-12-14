#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5410722118716561223LL;
unsigned short var_6 = (unsigned short)7692;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1411699711U;
unsigned short var_16 = (unsigned short)27287;
int zero = 0;
long long int var_18 = -3429692328911018708LL;
short var_19 = (short)-26435;
unsigned long long int var_20 = 4180131465135778796ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
