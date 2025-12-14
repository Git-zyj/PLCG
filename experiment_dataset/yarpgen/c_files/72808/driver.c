#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9960;
int var_5 = 960615476;
long long int var_6 = -2036286364322143319LL;
unsigned short var_9 = (unsigned short)23122;
int zero = 0;
long long int var_18 = 848752036864515838LL;
short var_19 = (short)-19923;
unsigned short var_20 = (unsigned short)6414;
unsigned int var_21 = 1976849609U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
