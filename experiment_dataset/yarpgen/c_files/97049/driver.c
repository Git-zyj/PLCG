#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6415329890690134560LL;
int var_2 = 1451114851;
unsigned char var_6 = (unsigned char)3;
long long int var_7 = -4146266717117062932LL;
unsigned char var_9 = (unsigned char)72;
int zero = 0;
long long int var_10 = 3030929612233035096LL;
short var_11 = (short)21377;
long long int var_12 = -5556392307904226297LL;
int var_13 = 1454870926;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
