#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30863;
unsigned short var_1 = (unsigned short)26266;
short var_5 = (short)12896;
unsigned short var_6 = (unsigned short)59104;
short var_7 = (short)-3217;
signed char var_8 = (signed char)39;
signed char var_9 = (signed char)64;
int zero = 0;
unsigned char var_10 = (unsigned char)129;
signed char var_11 = (signed char)33;
unsigned short var_12 = (unsigned short)57885;
unsigned long long int var_13 = 9255048552669963140ULL;
short var_14 = (short)32707;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
