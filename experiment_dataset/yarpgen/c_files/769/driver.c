#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20819;
long long int var_1 = -9131747866262121327LL;
long long int var_4 = -4734756687702281878LL;
short var_6 = (short)-5910;
long long int var_8 = -2113471412145617194LL;
short var_10 = (short)-25569;
int zero = 0;
short var_11 = (short)4063;
short var_12 = (short)7946;
long long int var_13 = -3421450581394887365LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
