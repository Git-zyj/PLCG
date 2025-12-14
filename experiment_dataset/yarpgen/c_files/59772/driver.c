#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1567033528U;
long long int var_7 = 4194759329715192322LL;
unsigned short var_10 = (unsigned short)36313;
int var_15 = 1058976341;
int zero = 0;
short var_16 = (short)1445;
long long int var_17 = -1001040602299129878LL;
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
