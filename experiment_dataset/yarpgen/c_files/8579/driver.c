#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4299;
unsigned char var_3 = (unsigned char)25;
unsigned char var_7 = (unsigned char)0;
unsigned long long int var_8 = 5670738307765430562ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)122;
unsigned short var_17 = (unsigned short)19867;
unsigned long long int var_18 = 9431848824514478242ULL;
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
