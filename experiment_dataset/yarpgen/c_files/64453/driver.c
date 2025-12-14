#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 255227210;
unsigned long long int var_10 = 4769069597200275532ULL;
unsigned char var_11 = (unsigned char)138;
int zero = 0;
short var_12 = (short)12634;
long long int var_13 = 7848883414100926204LL;
unsigned char var_14 = (unsigned char)250;
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
