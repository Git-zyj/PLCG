#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -247485117;
_Bool var_3 = (_Bool)0;
int var_4 = -2045846943;
int var_5 = 767224526;
unsigned char var_8 = (unsigned char)154;
unsigned long long int var_11 = 17383738489196682640ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 906748644;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)59715;
void init() {
}

void checksum() {
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
