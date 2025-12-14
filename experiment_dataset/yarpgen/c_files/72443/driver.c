#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16791;
int var_1 = -1395243699;
int var_2 = -1587949476;
int var_6 = -233855060;
unsigned int var_7 = 2280477344U;
int zero = 0;
long long int var_20 = -7803529713495409817LL;
unsigned char var_21 = (unsigned char)114;
unsigned int var_22 = 2245187226U;
void init() {
}

void checksum() {
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
