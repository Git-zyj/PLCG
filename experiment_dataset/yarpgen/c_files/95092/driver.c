#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2328706873240486319LL;
short var_2 = (short)-24982;
unsigned short var_3 = (unsigned short)48675;
unsigned long long int var_10 = 169514638069580414ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)175;
int var_12 = 1913704234;
unsigned char var_13 = (unsigned char)217;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)32666;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
