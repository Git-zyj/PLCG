#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned short var_2 = (unsigned short)59456;
unsigned short var_3 = (unsigned short)10427;
long long int var_4 = -2010260014853778110LL;
int var_5 = -1187793035;
unsigned int var_6 = 1063558111U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)106;
int zero = 0;
long long int var_11 = -3854829796754350307LL;
unsigned int var_12 = 2531324553U;
unsigned long long int var_13 = 14362643165491893169ULL;
unsigned int var_14 = 2837469696U;
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
