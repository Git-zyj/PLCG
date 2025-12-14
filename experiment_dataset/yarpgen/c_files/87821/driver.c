#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1567586488;
unsigned char var_8 = (unsigned char)34;
signed char var_9 = (signed char)114;
long long int var_11 = 6033752462348838949LL;
signed char var_17 = (signed char)-39;
unsigned long long int var_18 = 8604324049576255000ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)6484;
short var_21 = (short)-16381;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
