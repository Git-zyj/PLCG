#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14554171005405069681ULL;
unsigned long long int var_5 = 5816431563263766959ULL;
unsigned char var_6 = (unsigned char)146;
long long int var_7 = -77192735051935994LL;
unsigned long long int var_8 = 9747785086252293708ULL;
unsigned short var_9 = (unsigned short)24681;
int zero = 0;
unsigned short var_10 = (unsigned short)19079;
unsigned char var_11 = (unsigned char)190;
int var_12 = 1655531030;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
