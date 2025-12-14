#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
long long int var_2 = -6600267454186665086LL;
unsigned short var_4 = (unsigned short)12781;
int var_6 = 1528760691;
unsigned long long int var_7 = 5666765896897721396ULL;
int var_8 = -252298355;
int zero = 0;
long long int var_14 = -6022865370104850836LL;
unsigned short var_15 = (unsigned short)37939;
void init() {
}

void checksum() {
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
