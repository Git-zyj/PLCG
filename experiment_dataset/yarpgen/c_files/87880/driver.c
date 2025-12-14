#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -607751980;
int var_3 = 440840504;
unsigned char var_5 = (unsigned char)117;
int var_8 = 1819785274;
int var_9 = 1485025084;
long long int var_10 = -5880464865446048185LL;
int var_15 = -915774228;
long long int var_16 = 5657472067552706260LL;
int zero = 0;
unsigned char var_17 = (unsigned char)107;
unsigned char var_18 = (unsigned char)21;
unsigned short var_19 = (unsigned short)19440;
unsigned char var_20 = (unsigned char)229;
unsigned long long int var_21 = 3310132388773871237ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
