#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11508850120590863650ULL;
int var_1 = 214239105;
long long int var_3 = -5557538068930401337LL;
unsigned char var_6 = (unsigned char)90;
long long int var_7 = -6086364792361328586LL;
int var_8 = -1804493151;
int zero = 0;
unsigned short var_11 = (unsigned short)51780;
signed char var_12 = (signed char)-7;
short var_13 = (short)-6455;
unsigned char var_14 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
