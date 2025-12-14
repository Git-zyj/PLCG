#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1809619712;
unsigned short var_4 = (unsigned short)21492;
unsigned char var_7 = (unsigned char)66;
int var_10 = 2054527277;
int zero = 0;
int var_11 = 1525168858;
int var_12 = 156027449;
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
