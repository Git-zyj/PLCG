#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2933064544U;
unsigned int var_6 = 2768203388U;
unsigned char var_7 = (unsigned char)69;
unsigned long long int var_10 = 18357382873595147673ULL;
signed char var_15 = (signed char)-57;
int zero = 0;
unsigned int var_20 = 4274375166U;
short var_21 = (short)5127;
unsigned short var_22 = (unsigned short)63357;
void init() {
}

void checksum() {
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
