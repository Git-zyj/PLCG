#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-13;
short var_4 = (short)-12890;
long long int var_6 = 80951131128808092LL;
long long int var_8 = -2406001736164849075LL;
int zero = 0;
unsigned short var_10 = (unsigned short)56730;
long long int var_11 = -2009530961667839273LL;
signed char var_12 = (signed char)54;
unsigned short var_13 = (unsigned short)25697;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
