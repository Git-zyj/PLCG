#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12385997854632756073ULL;
long long int var_7 = 5140969588557603068LL;
int var_8 = 1303517394;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)13808;
short var_16 = (short)30243;
unsigned long long int var_17 = 7185720381644834409ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
