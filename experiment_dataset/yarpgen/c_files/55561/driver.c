#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 41844353;
unsigned short var_2 = (unsigned short)10572;
short var_3 = (short)-22521;
signed char var_4 = (signed char)-4;
unsigned long long int var_5 = 4577008712428569929ULL;
int var_6 = 1251999550;
unsigned long long int var_7 = 13480405254638303716ULL;
signed char var_8 = (signed char)-27;
unsigned long long int var_9 = 6712669313708540555ULL;
unsigned long long int var_10 = 6868751438208421009ULL;
int zero = 0;
signed char var_11 = (signed char)75;
int var_12 = 2141466191;
void init() {
}

void checksum() {
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
