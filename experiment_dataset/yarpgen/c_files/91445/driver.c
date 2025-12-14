#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
unsigned short var_3 = (unsigned short)46155;
int var_4 = 1076516311;
short var_5 = (short)2322;
long long int var_6 = -5219326792939475590LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4029255366203645798ULL;
signed char var_13 = (signed char)-111;
int zero = 0;
signed char var_15 = (signed char)-95;
unsigned short var_16 = (unsigned short)46919;
int var_17 = 590036574;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
