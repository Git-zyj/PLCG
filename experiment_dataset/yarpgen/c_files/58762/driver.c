#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)49614;
unsigned short var_7 = (unsigned short)28031;
int var_8 = -466692315;
int var_10 = 1288201096;
unsigned long long int var_11 = 16690707208604224326ULL;
unsigned int var_12 = 2533990154U;
signed char var_13 = (signed char)-114;
unsigned short var_15 = (unsigned short)31771;
signed char var_17 = (signed char)107;
int var_18 = 1677674904;
int zero = 0;
unsigned long long int var_20 = 11626694535361787906ULL;
int var_21 = 1197307705;
long long int var_22 = 4615354245269389209LL;
unsigned char var_23 = (unsigned char)72;
unsigned short var_24 = (unsigned short)16125;
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
