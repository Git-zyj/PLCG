#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13671611716293097865ULL;
unsigned short var_3 = (unsigned short)20530;
unsigned short var_7 = (unsigned short)15480;
unsigned short var_14 = (unsigned short)21520;
int zero = 0;
unsigned long long int var_15 = 18211816845859075842ULL;
_Bool var_16 = (_Bool)1;
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
