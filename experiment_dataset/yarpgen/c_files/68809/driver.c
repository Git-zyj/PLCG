#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-81;
unsigned short var_5 = (unsigned short)44511;
int var_7 = -1562525877;
int var_8 = -119068809;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
long long int var_12 = 9151203540310380230LL;
long long int var_13 = 6127645341062750423LL;
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
