#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30188;
long long int var_1 = -3480189177602027504LL;
unsigned long long int var_2 = 13946079825951092348ULL;
unsigned short var_3 = (unsigned short)22010;
unsigned long long int var_4 = 1240484950179151307ULL;
unsigned long long int var_8 = 15480262376037393184ULL;
signed char var_11 = (signed char)-64;
int var_12 = 132557536;
int zero = 0;
int var_14 = -777247848;
short var_15 = (short)-25832;
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
