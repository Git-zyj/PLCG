#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5764237818436234247LL;
unsigned char var_1 = (unsigned char)12;
unsigned long long int var_2 = 530595658239700452ULL;
unsigned char var_3 = (unsigned char)4;
unsigned long long int var_5 = 7256472814020286168ULL;
_Bool var_10 = (_Bool)1;
int var_14 = -207320623;
int var_17 = -2113163376;
int zero = 0;
unsigned long long int var_19 = 6751304065662561570ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)118;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
