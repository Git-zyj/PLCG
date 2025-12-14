#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1591010938;
unsigned char var_9 = (unsigned char)115;
unsigned long long int var_12 = 13035138301731670251ULL;
int var_13 = -1949847572;
int zero = 0;
int var_14 = -755161035;
signed char var_15 = (signed char)-72;
unsigned long long int var_16 = 13948771318763566670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
