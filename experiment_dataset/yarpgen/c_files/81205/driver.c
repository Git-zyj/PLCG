#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
long long int var_2 = 6811421131090011610LL;
unsigned long long int var_3 = 8386507567604088370ULL;
unsigned long long int var_4 = 13440210244371674754ULL;
unsigned long long int var_7 = 17420326150850580630ULL;
unsigned int var_9 = 3459157714U;
long long int var_12 = -3923972742040164475LL;
unsigned short var_13 = (unsigned short)13913;
unsigned char var_15 = (unsigned char)215;
short var_18 = (short)-13979;
int zero = 0;
int var_19 = 1983554238;
unsigned short var_20 = (unsigned short)223;
unsigned char var_21 = (unsigned char)183;
unsigned char var_22 = (unsigned char)113;
short var_23 = (short)-8934;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
