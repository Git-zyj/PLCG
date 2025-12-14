#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1713256868313501412LL;
long long int var_3 = -7805550091864699255LL;
unsigned short var_6 = (unsigned short)27064;
short var_18 = (short)-15962;
int zero = 0;
unsigned long long int var_20 = 18127086767175830741ULL;
unsigned short var_21 = (unsigned short)33375;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
