#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8085833612140996386LL;
unsigned char var_2 = (unsigned char)91;
short var_3 = (short)10370;
signed char var_5 = (signed char)-6;
long long int var_6 = -9205251057875721914LL;
unsigned long long int var_8 = 12233226556189844564ULL;
short var_9 = (short)30543;
int zero = 0;
unsigned long long int var_10 = 16574535224260690266ULL;
signed char var_11 = (signed char)-44;
signed char var_12 = (signed char)68;
int var_13 = -1380693032;
signed char var_14 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
