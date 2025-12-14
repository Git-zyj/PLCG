#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned int var_3 = 4150352205U;
long long int var_4 = 6839775301153712137LL;
short var_5 = (short)-17465;
unsigned char var_7 = (unsigned char)209;
signed char var_11 = (signed char)65;
int zero = 0;
signed char var_13 = (signed char)-35;
unsigned char var_14 = (unsigned char)138;
int var_15 = 1088738437;
void init() {
}

void checksum() {
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
