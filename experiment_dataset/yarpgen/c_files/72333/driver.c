#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40547;
unsigned short var_2 = (unsigned short)38282;
long long int var_3 = -3284869166680568343LL;
int var_5 = 314389896;
unsigned long long int var_10 = 15130963489902798229ULL;
int zero = 0;
signed char var_11 = (signed char)-85;
signed char var_12 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
