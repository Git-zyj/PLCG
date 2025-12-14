#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10465;
unsigned char var_2 = (unsigned char)154;
int var_3 = -425161700;
unsigned short var_8 = (unsigned short)26235;
short var_9 = (short)-18936;
int zero = 0;
int var_10 = 1617933070;
unsigned int var_11 = 1706090536U;
unsigned long long int var_12 = 3678573557365951156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
