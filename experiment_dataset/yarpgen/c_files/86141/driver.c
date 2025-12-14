#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9097927537907497809LL;
unsigned char var_2 = (unsigned char)68;
unsigned char var_4 = (unsigned char)114;
long long int var_10 = -5093968724043276692LL;
unsigned short var_12 = (unsigned short)59176;
unsigned short var_15 = (unsigned short)33576;
int var_18 = 557009415;
long long int var_19 = -4086580733174942603LL;
int zero = 0;
unsigned short var_20 = (unsigned short)53952;
unsigned long long int var_21 = 8739743584088644627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
