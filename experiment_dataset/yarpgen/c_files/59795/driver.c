#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59199;
unsigned short var_1 = (unsigned short)15408;
unsigned short var_4 = (unsigned short)16609;
unsigned long long int var_5 = 17444455184664624815ULL;
unsigned char var_8 = (unsigned char)251;
unsigned short var_10 = (unsigned short)26171;
int zero = 0;
unsigned long long int var_11 = 7391134068936975124ULL;
int var_12 = -684958228;
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
