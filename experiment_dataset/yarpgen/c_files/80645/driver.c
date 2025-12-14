#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
unsigned char var_3 = (unsigned char)97;
unsigned long long int var_4 = 12217705974875092924ULL;
long long int var_6 = 7194445680778742699LL;
short var_9 = (short)5345;
unsigned long long int var_12 = 5274782728104468886ULL;
signed char var_13 = (signed char)-126;
int var_14 = 387357789;
unsigned char var_16 = (unsigned char)125;
int zero = 0;
signed char var_17 = (signed char)113;
signed char var_18 = (signed char)86;
signed char var_19 = (signed char)-29;
unsigned long long int var_20 = 4621923245552653704ULL;
unsigned char var_21 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
