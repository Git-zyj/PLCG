#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9779855474176422230ULL;
unsigned short var_7 = (unsigned short)36747;
short var_8 = (short)-19385;
signed char var_12 = (signed char)-76;
unsigned short var_13 = (unsigned short)8035;
unsigned short var_14 = (unsigned short)52768;
int zero = 0;
long long int var_20 = 5270399782466825439LL;
unsigned int var_21 = 2339619383U;
unsigned long long int var_22 = 612065132158028753ULL;
signed char var_23 = (signed char)-121;
void init() {
}

void checksum() {
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
