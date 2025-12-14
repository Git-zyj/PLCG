#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-83;
int var_4 = -1898944307;
unsigned long long int var_6 = 270316021213941104ULL;
unsigned short var_9 = (unsigned short)15465;
int zero = 0;
unsigned char var_10 = (unsigned char)67;
unsigned long long int var_11 = 13288813250507114265ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
