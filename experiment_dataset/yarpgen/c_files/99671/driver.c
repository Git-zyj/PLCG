#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2684;
_Bool var_3 = (_Bool)1;
unsigned long long int var_10 = 14810497434687725135ULL;
unsigned long long int var_13 = 5540944909438052238ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)177;
long long int var_16 = 8971935536278103527LL;
short var_17 = (short)-32403;
int var_18 = 1225762567;
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
