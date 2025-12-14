#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 414992233U;
unsigned char var_5 = (unsigned char)194;
short var_8 = (short)29469;
long long int var_11 = -799130195848339802LL;
unsigned short var_18 = (unsigned short)19943;
int zero = 0;
unsigned long long int var_19 = 1329756984293678161ULL;
short var_20 = (short)-9879;
short var_21 = (short)-3855;
long long int var_22 = 3878886590207431334LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
