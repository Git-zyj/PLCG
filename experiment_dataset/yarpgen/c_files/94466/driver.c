#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16982854247070792014ULL;
signed char var_3 = (signed char)105;
unsigned char var_6 = (unsigned char)154;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 5183792635115591302ULL;
unsigned long long int var_12 = 16144135852702844972ULL;
unsigned short var_13 = (unsigned short)40332;
int zero = 0;
short var_14 = (short)-16390;
unsigned char var_15 = (unsigned char)150;
short var_16 = (short)-23822;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
