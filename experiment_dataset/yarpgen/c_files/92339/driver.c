#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15226734212910611658ULL;
short var_6 = (short)20161;
unsigned char var_15 = (unsigned char)49;
int zero = 0;
long long int var_18 = -6371418581524805400LL;
short var_19 = (short)-26465;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
