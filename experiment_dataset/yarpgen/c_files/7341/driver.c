#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46793;
unsigned long long int var_2 = 658669215554275539ULL;
unsigned long long int var_3 = 1057177310244339570ULL;
long long int var_4 = 1433810579593267037LL;
unsigned short var_6 = (unsigned short)8140;
unsigned char var_9 = (unsigned char)190;
unsigned char var_11 = (unsigned char)30;
short var_14 = (short)22157;
long long int var_19 = 6442229939548405492LL;
int zero = 0;
unsigned int var_20 = 2543480451U;
unsigned short var_21 = (unsigned short)7128;
long long int var_22 = 5854111031505340464LL;
void init() {
}

void checksum() {
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
