#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)53;
int var_4 = -1436449817;
short var_5 = (short)-32513;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_9 = 11118806105984702508ULL;
unsigned long long int var_10 = 8007321771313459999ULL;
short var_11 = (short)-12490;
int zero = 0;
int var_13 = -221270494;
unsigned long long int var_14 = 701045019680096964ULL;
short var_15 = (short)14161;
void init() {
}

void checksum() {
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
