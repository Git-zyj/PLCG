#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4056177730390559023ULL;
unsigned int var_2 = 3114058741U;
unsigned int var_3 = 3582718385U;
short var_4 = (short)-28294;
int var_11 = -1553111295;
unsigned char var_12 = (unsigned char)104;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
unsigned char var_15 = (unsigned char)206;
unsigned long long int var_16 = 12300810112388982503ULL;
unsigned long long int var_17 = 7348499849875811373ULL;
unsigned long long int var_18 = 5994431333298190070ULL;
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
