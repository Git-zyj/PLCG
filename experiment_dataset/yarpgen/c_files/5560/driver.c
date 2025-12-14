#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3773649490483491734ULL;
long long int var_1 = 3391164700985581918LL;
signed char var_2 = (signed char)119;
unsigned int var_4 = 2284826359U;
int var_5 = -1349040278;
int var_6 = 493724013;
signed char var_9 = (signed char)101;
int zero = 0;
unsigned short var_10 = (unsigned short)37985;
signed char var_11 = (signed char)106;
long long int var_12 = 3067630911851718141LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
