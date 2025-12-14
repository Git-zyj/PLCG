#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
short var_3 = (short)14796;
unsigned int var_4 = 3812082012U;
unsigned int var_5 = 179014492U;
signed char var_6 = (signed char)-9;
unsigned long long int var_7 = 7548820904286914478ULL;
unsigned short var_8 = (unsigned short)39738;
int var_10 = -232338044;
int zero = 0;
unsigned long long int var_11 = 99823457020052661ULL;
unsigned int var_12 = 1848141589U;
unsigned char var_13 = (unsigned char)133;
unsigned char var_14 = (unsigned char)208;
void init() {
}

void checksum() {
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
