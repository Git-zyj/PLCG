#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
unsigned long long int var_5 = 13908297662422835938ULL;
long long int var_8 = 8680831344027396030LL;
long long int var_9 = -460405461489935248LL;
short var_13 = (short)-4464;
unsigned char var_14 = (unsigned char)87;
unsigned char var_18 = (unsigned char)24;
int zero = 0;
int var_20 = 1665242622;
short var_21 = (short)-3162;
unsigned short var_22 = (unsigned short)22969;
unsigned long long int var_23 = 10019361021330319428ULL;
unsigned short var_24 = (unsigned short)31313;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
