#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4235192652U;
unsigned short var_2 = (unsigned short)16834;
short var_3 = (short)-3479;
unsigned char var_4 = (unsigned char)157;
unsigned long long int var_6 = 12521166427086978452ULL;
unsigned long long int var_7 = 11388674788381669163ULL;
int var_8 = 1174999539;
unsigned long long int var_9 = 18325386017870390101ULL;
unsigned long long int var_10 = 17972456989117802929ULL;
unsigned long long int var_11 = 12581404817864580325ULL;
int zero = 0;
signed char var_13 = (signed char)57;
unsigned int var_14 = 3006900877U;
signed char var_15 = (signed char)-106;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
