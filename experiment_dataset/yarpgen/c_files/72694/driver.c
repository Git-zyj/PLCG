#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4835;
short var_3 = (short)10558;
unsigned long long int var_4 = 1201082657849117463ULL;
int var_6 = 2056256600;
unsigned short var_8 = (unsigned short)42833;
short var_10 = (short)32466;
int zero = 0;
short var_11 = (short)25393;
short var_12 = (short)-1050;
unsigned long long int var_13 = 17774589599793843963ULL;
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
