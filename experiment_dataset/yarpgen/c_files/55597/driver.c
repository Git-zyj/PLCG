#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34325;
signed char var_1 = (signed char)17;
int var_2 = -1929089496;
signed char var_5 = (signed char)59;
unsigned char var_10 = (unsigned char)184;
signed char var_13 = (signed char)-81;
unsigned short var_14 = (unsigned short)38169;
signed char var_15 = (signed char)-10;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
unsigned short var_20 = (unsigned short)18639;
unsigned long long int var_21 = 8469326115108870717ULL;
long long int var_22 = 2498616654094351858LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
