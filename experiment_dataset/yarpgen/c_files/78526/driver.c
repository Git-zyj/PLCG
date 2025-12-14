#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 650855569;
unsigned char var_5 = (unsigned char)71;
long long int var_9 = -2873123600265293393LL;
unsigned long long int var_12 = 4815687727564370273ULL;
signed char var_13 = (signed char)18;
unsigned short var_16 = (unsigned short)39191;
int zero = 0;
unsigned int var_18 = 1843557676U;
unsigned short var_19 = (unsigned short)62817;
unsigned char var_20 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
