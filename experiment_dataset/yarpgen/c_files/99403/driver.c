#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned char var_2 = (unsigned char)69;
signed char var_3 = (signed char)89;
signed char var_4 = (signed char)127;
unsigned long long int var_5 = 1760816842769719961ULL;
signed char var_7 = (signed char)-38;
long long int var_10 = -781649140971129953LL;
signed char var_12 = (signed char)46;
unsigned long long int var_13 = 1043890252139756588ULL;
unsigned char var_17 = (unsigned char)243;
int zero = 0;
short var_19 = (short)-15881;
long long int var_20 = 3281875340941227855LL;
int var_21 = -1078058086;
unsigned char var_22 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
