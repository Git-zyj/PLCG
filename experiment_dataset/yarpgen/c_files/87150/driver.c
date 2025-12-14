#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59119;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)81;
unsigned long long int var_5 = 14535008414217473714ULL;
int var_6 = -1322560288;
unsigned short var_11 = (unsigned short)33743;
int zero = 0;
short var_12 = (short)-10903;
signed char var_13 = (signed char)-21;
long long int var_14 = 4129120903960163316LL;
int var_15 = -118437080;
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
