#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27767;
unsigned short var_3 = (unsigned short)35725;
unsigned int var_4 = 3170789266U;
short var_5 = (short)18676;
unsigned char var_6 = (unsigned char)246;
unsigned int var_7 = 3373483182U;
int var_9 = 1621215053;
unsigned short var_10 = (unsigned short)40896;
unsigned short var_11 = (unsigned short)19053;
long long int var_12 = 8841855314766827659LL;
int zero = 0;
long long int var_13 = 8133376136855720729LL;
int var_14 = -1118619588;
unsigned short var_15 = (unsigned short)41039;
long long int var_16 = -3447910052556187383LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
