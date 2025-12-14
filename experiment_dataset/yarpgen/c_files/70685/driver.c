#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9164663212795528074LL;
signed char var_2 = (signed char)71;
unsigned short var_3 = (unsigned short)39656;
signed char var_5 = (signed char)15;
int var_6 = 1116487579;
signed char var_7 = (signed char)-66;
int zero = 0;
short var_19 = (short)-12969;
int var_20 = 255620088;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
