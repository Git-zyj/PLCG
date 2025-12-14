#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)174;
signed char var_6 = (signed char)-43;
signed char var_7 = (signed char)5;
signed char var_11 = (signed char)-44;
long long int var_12 = 4793241695986320808LL;
int zero = 0;
unsigned int var_19 = 2835823794U;
short var_20 = (short)12328;
signed char var_21 = (signed char)-35;
unsigned char var_22 = (unsigned char)146;
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
