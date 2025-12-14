#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2798959870288997388LL;
unsigned short var_5 = (unsigned short)58311;
short var_6 = (short)16877;
short var_8 = (short)23962;
long long int var_12 = 50046354956786328LL;
short var_15 = (short)20670;
int zero = 0;
unsigned char var_18 = (unsigned char)172;
unsigned char var_19 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
