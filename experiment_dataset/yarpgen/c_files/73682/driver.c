#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14691364270639087604ULL;
unsigned long long int var_2 = 1367127269252025010ULL;
unsigned int var_3 = 2358987312U;
short var_5 = (short)-26212;
unsigned int var_8 = 850932098U;
unsigned int var_9 = 920649459U;
signed char var_13 = (signed char)-63;
signed char var_16 = (signed char)-74;
int zero = 0;
unsigned long long int var_20 = 5395162272319009991ULL;
short var_21 = (short)-6836;
unsigned char var_22 = (unsigned char)228;
unsigned short var_23 = (unsigned short)26440;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
