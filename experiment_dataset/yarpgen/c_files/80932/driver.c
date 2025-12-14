#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
long long int var_2 = -6759482257479971645LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-45;
unsigned long long int var_7 = 11564698640001964387ULL;
int var_8 = 364625350;
unsigned char var_10 = (unsigned char)199;
int zero = 0;
int var_11 = -438102539;
unsigned char var_12 = (unsigned char)17;
int var_13 = -2088493135;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
