#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18306304533349353987ULL;
int var_1 = 584134865;
int var_2 = 22322058;
unsigned long long int var_3 = 13697057532582750921ULL;
short var_4 = (short)10113;
unsigned long long int var_5 = 1302807253166983903ULL;
short var_7 = (short)26173;
long long int var_8 = 1305855431870342800LL;
unsigned long long int var_9 = 179892791710497859ULL;
int var_10 = -537344072;
int zero = 0;
long long int var_13 = -7143880829421748159LL;
unsigned char var_14 = (unsigned char)82;
unsigned short var_15 = (unsigned short)46302;
int var_16 = -817176564;
unsigned long long int var_17 = 11507477481751171777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
