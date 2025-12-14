#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2004926326;
long long int var_6 = -5030539555550514929LL;
int zero = 0;
unsigned long long int var_13 = 3752869869971781431ULL;
long long int var_14 = -4660773803835059848LL;
unsigned short var_15 = (unsigned short)43568;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
