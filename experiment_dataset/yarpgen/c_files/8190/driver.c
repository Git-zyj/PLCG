#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7748002958954913329LL;
unsigned long long int var_4 = 10766909624620202254ULL;
unsigned char var_5 = (unsigned char)245;
unsigned int var_6 = 2823851600U;
signed char var_9 = (signed char)-121;
unsigned int var_13 = 313017240U;
long long int var_15 = -8834863918953442533LL;
int zero = 0;
short var_19 = (short)-14344;
signed char var_20 = (signed char)102;
unsigned char var_21 = (unsigned char)99;
unsigned int var_22 = 3117607128U;
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
