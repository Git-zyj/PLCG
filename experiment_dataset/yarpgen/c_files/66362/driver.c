#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
short var_1 = (short)8470;
unsigned char var_2 = (unsigned char)223;
int var_3 = 1528176565;
unsigned short var_4 = (unsigned short)26330;
unsigned int var_6 = 3482485107U;
unsigned short var_9 = (unsigned short)13363;
unsigned long long int var_10 = 6245802714807615910ULL;
long long int var_11 = 8598808061924012910LL;
int zero = 0;
unsigned long long int var_12 = 2227255475875617938ULL;
long long int var_13 = -6817758269667324685LL;
unsigned short var_14 = (unsigned short)53381;
unsigned int var_15 = 1027844724U;
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
