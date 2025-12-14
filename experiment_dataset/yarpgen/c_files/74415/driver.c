#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56217;
unsigned int var_3 = 2030463533U;
int var_4 = -1107385044;
unsigned short var_8 = (unsigned short)33024;
unsigned char var_9 = (unsigned char)220;
unsigned int var_10 = 1766950169U;
int var_11 = 903345243;
int zero = 0;
unsigned int var_12 = 20229731U;
long long int var_13 = -8927927188926036871LL;
int var_14 = -469158930;
long long int var_15 = -7797261227637368052LL;
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
