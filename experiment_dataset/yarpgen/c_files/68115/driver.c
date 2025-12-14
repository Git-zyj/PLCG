#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-72;
long long int var_3 = -7027713277349364736LL;
unsigned long long int var_4 = 3725134643633711758ULL;
int var_6 = -1882252751;
long long int var_13 = -22521517778914321LL;
int zero = 0;
unsigned short var_16 = (unsigned short)41012;
int var_17 = 1987358644;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
