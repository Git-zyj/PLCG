#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)191;
int var_7 = -2086803105;
int var_9 = -1151575320;
short var_11 = (short)-25413;
int zero = 0;
unsigned long long int var_12 = 2853850102827006073ULL;
short var_13 = (short)-26346;
long long int var_14 = -5936158589715257238LL;
void init() {
}

void checksum() {
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
