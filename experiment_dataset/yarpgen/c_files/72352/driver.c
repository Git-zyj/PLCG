#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1445161466;
unsigned short var_7 = (unsigned short)24735;
signed char var_11 = (signed char)102;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
signed char var_14 = (signed char)-109;
void init() {
}

void checksum() {
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
