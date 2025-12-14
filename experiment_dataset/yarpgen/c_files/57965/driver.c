#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_4 = -656794190;
unsigned short var_5 = (unsigned short)27171;
unsigned long long int var_6 = 17304873780815997580ULL;
short var_9 = (short)-22777;
unsigned short var_10 = (unsigned short)24057;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2855169960880347852ULL;
short var_18 = (short)-21032;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)19;
short var_21 = (short)22835;
long long int var_22 = -8253623176427113592LL;
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
