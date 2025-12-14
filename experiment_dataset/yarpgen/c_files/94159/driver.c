#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5884868733439703975ULL;
short var_3 = (short)-31597;
short var_4 = (short)-4540;
unsigned long long int var_6 = 8752720531014415506ULL;
unsigned long long int var_7 = 11729488254481189320ULL;
short var_8 = (short)22160;
int var_11 = 200978760;
int zero = 0;
unsigned int var_14 = 2250521943U;
unsigned int var_15 = 2302362312U;
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
