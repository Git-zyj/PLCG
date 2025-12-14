#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15272940523760424634ULL;
short var_3 = (short)-14610;
unsigned short var_4 = (unsigned short)24453;
unsigned long long int var_7 = 8154675286405801148ULL;
long long int var_8 = 2921527100235443588LL;
int zero = 0;
unsigned long long int var_10 = 6121706662337893552ULL;
unsigned short var_11 = (unsigned short)21732;
unsigned long long int var_12 = 15403917779638793832ULL;
long long int var_13 = 2705038771764743446LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
