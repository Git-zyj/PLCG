#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6368119675988579462ULL;
short var_5 = (short)-24189;
unsigned char var_8 = (unsigned char)121;
int var_12 = -1176136660;
int var_13 = 249602829;
int zero = 0;
unsigned short var_14 = (unsigned short)37078;
unsigned long long int var_15 = 12400432684261589452ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
