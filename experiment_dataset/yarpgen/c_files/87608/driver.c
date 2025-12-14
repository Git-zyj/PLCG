#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17379751480203845137ULL;
int var_3 = 256595132;
short var_6 = (short)-15217;
_Bool var_7 = (_Bool)1;
int var_9 = 407941392;
unsigned long long int var_10 = 12390019871752067257ULL;
int zero = 0;
unsigned int var_11 = 284282160U;
unsigned int var_12 = 2775914702U;
signed char var_13 = (signed char)44;
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
