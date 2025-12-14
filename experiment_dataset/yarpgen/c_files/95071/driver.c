#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -40155142;
short var_1 = (short)-5585;
unsigned short var_2 = (unsigned short)62567;
unsigned char var_9 = (unsigned char)194;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)-16438;
short var_13 = (short)-27886;
unsigned char var_14 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
