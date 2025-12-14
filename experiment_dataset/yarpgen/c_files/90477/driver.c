#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
int var_1 = 993413072;
unsigned long long int var_2 = 11456590934214399832ULL;
unsigned char var_3 = (unsigned char)254;
unsigned short var_5 = (unsigned short)11065;
unsigned char var_6 = (unsigned char)172;
unsigned long long int var_7 = 13881298429091362997ULL;
unsigned long long int var_11 = 16741388325112685676ULL;
unsigned char var_12 = (unsigned char)13;
unsigned short var_13 = (unsigned short)9241;
unsigned char var_14 = (unsigned char)168;
unsigned char var_16 = (unsigned char)112;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
signed char var_18 = (signed char)-126;
unsigned char var_19 = (unsigned char)235;
unsigned char var_20 = (unsigned char)62;
unsigned short var_21 = (unsigned short)4271;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
