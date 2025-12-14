#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned short var_2 = (unsigned short)57488;
unsigned long long int var_3 = 13389780103110156523ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)156;
int var_16 = -678938077;
int zero = 0;
int var_20 = -377798204;
long long int var_21 = 8457844135853278074LL;
unsigned char var_22 = (unsigned char)155;
int var_23 = 425983959;
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
