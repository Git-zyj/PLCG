#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25264;
unsigned char var_2 = (unsigned char)108;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)130;
unsigned char var_6 = (unsigned char)190;
long long int var_9 = 5477367677200635709LL;
short var_10 = (short)17900;
unsigned char var_12 = (unsigned char)117;
int zero = 0;
unsigned long long int var_16 = 3194298713447061905ULL;
unsigned char var_17 = (unsigned char)133;
short var_18 = (short)-10337;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
