#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
long long int var_2 = 4879066591046639606LL;
int var_4 = 210930887;
unsigned char var_6 = (unsigned char)144;
unsigned short var_10 = (unsigned short)57178;
int zero = 0;
signed char var_12 = (signed char)-110;
signed char var_13 = (signed char)-101;
unsigned char var_14 = (unsigned char)86;
int var_15 = -377735336;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
