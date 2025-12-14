#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8006;
unsigned long long int var_2 = 9874535774506976195ULL;
unsigned long long int var_5 = 5270955228920516384ULL;
int zero = 0;
long long int var_10 = 1114451042881723267LL;
unsigned char var_11 = (unsigned char)219;
short var_12 = (short)-12424;
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
