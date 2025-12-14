#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 465274458972769233LL;
int var_2 = -156978439;
unsigned long long int var_4 = 11889065088362459621ULL;
int var_5 = -1885874650;
signed char var_6 = (signed char)-59;
unsigned char var_7 = (unsigned char)213;
int zero = 0;
unsigned short var_10 = (unsigned short)4324;
unsigned int var_11 = 202103684U;
unsigned int var_12 = 3450209993U;
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
