#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned short var_3 = (unsigned short)13435;
signed char var_4 = (signed char)104;
unsigned long long int var_7 = 16295140346878960126ULL;
unsigned long long int var_14 = 13736038218493284188ULL;
int var_18 = 1614969434;
unsigned long long int var_19 = 12523508980219133631ULL;
int zero = 0;
int var_20 = 2029339714;
signed char var_21 = (signed char)-15;
unsigned char var_22 = (unsigned char)71;
short var_23 = (short)3257;
unsigned char var_24 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
