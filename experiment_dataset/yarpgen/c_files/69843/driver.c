#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1938597636;
signed char var_2 = (signed char)-73;
long long int var_4 = 4334904820224681588LL;
short var_5 = (short)22503;
unsigned int var_6 = 3501740520U;
long long int var_7 = 981691053742163657LL;
unsigned char var_9 = (unsigned char)165;
unsigned long long int var_10 = 7088575808931740934ULL;
signed char var_11 = (signed char)102;
int zero = 0;
unsigned char var_13 = (unsigned char)174;
int var_14 = -390450814;
unsigned long long int var_15 = 9831733401764220950ULL;
void init() {
}

void checksum() {
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
