#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11219;
unsigned short var_1 = (unsigned short)49460;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)39;
unsigned short var_9 = (unsigned short)61209;
unsigned short var_11 = (unsigned short)21952;
int zero = 0;
short var_12 = (short)-9083;
long long int var_13 = -1541589306127585772LL;
long long int var_14 = -7391551573414024333LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
