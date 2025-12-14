#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8205435673240820980LL;
long long int var_9 = 3793329096924695701LL;
unsigned char var_10 = (unsigned char)52;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)15370;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)13813;
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
