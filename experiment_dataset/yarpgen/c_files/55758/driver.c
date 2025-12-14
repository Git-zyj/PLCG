#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8960414895105543226ULL;
unsigned char var_2 = (unsigned char)199;
signed char var_4 = (signed char)-76;
int zero = 0;
unsigned short var_10 = (unsigned short)50413;
short var_11 = (short)26240;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
