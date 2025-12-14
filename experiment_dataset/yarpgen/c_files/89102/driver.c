#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
short var_1 = (short)17972;
unsigned long long int var_2 = 10700173284629044057ULL;
short var_6 = (short)-14887;
unsigned short var_7 = (unsigned short)38675;
unsigned char var_8 = (unsigned char)174;
unsigned char var_9 = (unsigned char)72;
long long int var_12 = 6676604623961759958LL;
int zero = 0;
signed char var_17 = (signed char)61;
signed char var_18 = (signed char)-29;
unsigned long long int var_19 = 7078075589662674152ULL;
unsigned long long int var_20 = 57192723215177700ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
