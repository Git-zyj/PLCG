#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1612541800;
unsigned int var_8 = 600321352U;
unsigned short var_14 = (unsigned short)49863;
int zero = 0;
unsigned short var_18 = (unsigned short)55126;
unsigned short var_19 = (unsigned short)49361;
short var_20 = (short)10125;
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
