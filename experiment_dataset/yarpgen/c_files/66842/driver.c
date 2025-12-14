#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3838227003311951656LL;
unsigned short var_3 = (unsigned short)19135;
signed char var_8 = (signed char)116;
signed char var_10 = (signed char)-48;
long long int var_11 = -1024504519108886222LL;
int zero = 0;
unsigned int var_12 = 253571869U;
short var_13 = (short)10856;
unsigned short var_14 = (unsigned short)38721;
void init() {
}

void checksum() {
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
