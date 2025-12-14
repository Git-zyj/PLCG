#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 311996295U;
unsigned char var_6 = (unsigned char)177;
int var_8 = 629718076;
unsigned long long int var_9 = 3109013209158050177ULL;
unsigned int var_11 = 467344324U;
int var_12 = 570971456;
unsigned char var_15 = (unsigned char)123;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)170;
unsigned long long int var_22 = 17657514512355792370ULL;
int var_23 = -1070172070;
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
