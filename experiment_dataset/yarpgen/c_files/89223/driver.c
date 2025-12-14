#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
unsigned int var_1 = 3009427583U;
long long int var_2 = 4087226896469992333LL;
signed char var_3 = (signed char)-90;
unsigned short var_4 = (unsigned short)19468;
signed char var_5 = (signed char)-86;
unsigned short var_6 = (unsigned short)51548;
short var_7 = (short)4995;
signed char var_9 = (signed char)-24;
int zero = 0;
unsigned int var_11 = 640278920U;
int var_12 = 2000161046;
unsigned int var_13 = 3314468465U;
short var_14 = (short)-17351;
unsigned short var_15 = (unsigned short)49524;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
