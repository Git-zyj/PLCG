#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8415617596902739747LL;
signed char var_2 = (signed char)25;
unsigned long long int var_5 = 17165491466375771251ULL;
short var_7 = (short)-8971;
int zero = 0;
unsigned char var_12 = (unsigned char)36;
signed char var_13 = (signed char)3;
unsigned long long int var_14 = 10762944053823848732ULL;
unsigned long long int var_15 = 10369639788380023586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
