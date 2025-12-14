#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)156;
unsigned long long int var_6 = 11348009006435072208ULL;
signed char var_7 = (signed char)41;
unsigned long long int var_9 = 15038375115425290843ULL;
signed char var_10 = (signed char)-12;
unsigned long long int var_15 = 9182813839839638952ULL;
int zero = 0;
unsigned long long int var_16 = 14360273922378855119ULL;
unsigned char var_17 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
