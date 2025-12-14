#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16615;
unsigned short var_11 = (unsigned short)61113;
int zero = 0;
unsigned long long int var_18 = 9846000794778185361ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15472256354931263749ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
