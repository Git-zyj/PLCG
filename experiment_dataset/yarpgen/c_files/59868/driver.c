#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50318;
unsigned int var_4 = 221020060U;
_Bool var_8 = (_Bool)0;
int var_12 = -433257882;
int var_13 = -1393592362;
int zero = 0;
unsigned short var_17 = (unsigned short)40281;
long long int var_18 = -2286482732503703501LL;
void init() {
}

void checksum() {
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
