#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49817;
unsigned short var_1 = (unsigned short)14515;
short var_2 = (short)15013;
unsigned int var_3 = 2313922230U;
unsigned char var_5 = (unsigned char)147;
int var_6 = 403055927;
unsigned char var_7 = (unsigned char)219;
unsigned long long int var_8 = 9093586674977468102ULL;
unsigned char var_9 = (unsigned char)177;
long long int var_11 = 8753417518396165254LL;
int zero = 0;
unsigned int var_12 = 2423028707U;
unsigned short var_13 = (unsigned short)2030;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
