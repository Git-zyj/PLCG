#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -966752701729470435LL;
short var_1 = (short)-17051;
unsigned long long int var_2 = 9669470018496095762ULL;
short var_3 = (short)4487;
unsigned short var_5 = (unsigned short)18643;
unsigned short var_6 = (unsigned short)65315;
unsigned char var_8 = (unsigned char)166;
unsigned char var_9 = (unsigned char)12;
short var_10 = (short)10758;
int zero = 0;
unsigned int var_11 = 1073508358U;
unsigned long long int var_12 = 9737109839265334882ULL;
unsigned long long int var_13 = 17457150756401046789ULL;
unsigned short var_14 = (unsigned short)52263;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
