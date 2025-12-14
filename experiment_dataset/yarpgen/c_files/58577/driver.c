#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5868536983493744634LL;
int var_1 = -151443572;
unsigned char var_2 = (unsigned char)121;
long long int var_6 = 7070057931073061900LL;
unsigned char var_7 = (unsigned char)149;
signed char var_11 = (signed char)5;
int zero = 0;
unsigned int var_12 = 946304049U;
int var_13 = 852424335;
void init() {
}

void checksum() {
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
