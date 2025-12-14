#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17817;
long long int var_1 = -5397191113923258178LL;
unsigned short var_8 = (unsigned short)51696;
int var_9 = -492055689;
int zero = 0;
unsigned int var_15 = 1752766281U;
unsigned long long int var_16 = 2123564503631444619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
