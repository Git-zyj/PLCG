#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1613729415;
unsigned int var_1 = 467006793U;
int var_2 = 762312492;
unsigned char var_6 = (unsigned char)217;
unsigned char var_7 = (unsigned char)126;
unsigned long long int var_9 = 10105532539365446021ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)74;
unsigned char var_11 = (unsigned char)232;
short var_12 = (short)-29797;
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
