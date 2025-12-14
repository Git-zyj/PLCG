#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1639098012U;
signed char var_1 = (signed char)-52;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-15;
signed char var_13 = (signed char)-27;
short var_14 = (short)10676;
int zero = 0;
unsigned short var_19 = (unsigned short)41414;
unsigned short var_20 = (unsigned short)26491;
unsigned short var_21 = (unsigned short)22202;
short var_22 = (short)5786;
signed char var_23 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
