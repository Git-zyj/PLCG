#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4921581445011105298ULL;
signed char var_8 = (signed char)70;
_Bool var_10 = (_Bool)1;
short var_13 = (short)15074;
signed char var_14 = (signed char)-43;
int zero = 0;
unsigned char var_17 = (unsigned char)105;
unsigned char var_18 = (unsigned char)81;
unsigned char var_19 = (unsigned char)209;
long long int var_20 = -5673484044214419895LL;
signed char var_21 = (signed char)-85;
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
