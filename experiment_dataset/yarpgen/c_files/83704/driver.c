#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1451961136;
unsigned long long int var_2 = 4536976962501632082ULL;
unsigned int var_3 = 1150517695U;
unsigned char var_7 = (unsigned char)116;
unsigned short var_8 = (unsigned short)27663;
unsigned char var_9 = (unsigned char)130;
unsigned short var_10 = (unsigned short)46309;
int zero = 0;
unsigned char var_11 = (unsigned char)25;
long long int var_12 = 4286265770799785823LL;
unsigned char var_13 = (unsigned char)240;
unsigned char var_14 = (unsigned char)223;
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
