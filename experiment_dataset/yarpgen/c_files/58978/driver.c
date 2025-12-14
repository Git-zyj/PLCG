#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 233513969U;
long long int var_9 = 7423846812885596591LL;
int var_10 = 10398070;
unsigned char var_13 = (unsigned char)166;
unsigned long long int var_14 = 6617730640602099357ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3263436928U;
unsigned char var_20 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
