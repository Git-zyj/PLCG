#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1141136995U;
short var_1 = (short)-31117;
signed char var_4 = (signed char)-37;
signed char var_5 = (signed char)69;
short var_6 = (short)-1598;
int var_9 = -1473100165;
int zero = 0;
unsigned char var_10 = (unsigned char)209;
unsigned short var_11 = (unsigned short)9004;
unsigned char var_12 = (unsigned char)188;
long long int var_13 = -4502478283483292997LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
