#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5630;
unsigned char var_6 = (unsigned char)180;
int zero = 0;
unsigned long long int var_15 = 4917079284224513478ULL;
short var_16 = (short)21126;
long long int var_17 = 5928707170301954004LL;
short var_18 = (short)-11890;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
