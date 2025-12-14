#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4750;
long long int var_1 = -3521973151385533018LL;
long long int var_2 = 6329331912440266829LL;
long long int var_3 = -9205375577675333268LL;
int var_4 = 1233183701;
unsigned long long int var_6 = 14066865916776534713ULL;
unsigned short var_7 = (unsigned short)42177;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)2382;
unsigned long long int var_11 = 15924654942657917280ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)103;
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
