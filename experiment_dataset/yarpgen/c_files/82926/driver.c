#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16173629352739735220ULL;
unsigned char var_6 = (unsigned char)221;
signed char var_7 = (signed char)127;
unsigned char var_13 = (unsigned char)183;
unsigned long long int var_15 = 11745877144155758078ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)30152;
unsigned int var_17 = 1430221325U;
unsigned char var_18 = (unsigned char)81;
int var_19 = -1059586532;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
