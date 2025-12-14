#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1532816766;
unsigned int var_11 = 230564149U;
unsigned int var_16 = 1596804392U;
unsigned short var_17 = (unsigned short)17455;
int zero = 0;
int var_19 = -773341785;
unsigned long long int var_20 = 3598342853664268319ULL;
signed char var_21 = (signed char)-44;
short var_22 = (short)9508;
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
