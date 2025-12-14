#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16624156609252228157ULL;
unsigned char var_7 = (unsigned char)149;
short var_10 = (short)24572;
signed char var_11 = (signed char)-88;
int zero = 0;
long long int var_12 = 4413699005336372682LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)8828;
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
