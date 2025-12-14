#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3560700970U;
unsigned int var_3 = 3060778545U;
int var_5 = -1662693174;
long long int var_6 = 1118454157331008538LL;
int var_12 = 1858254419;
long long int var_13 = -9221051838198642828LL;
unsigned int var_14 = 2925362933U;
int zero = 0;
int var_15 = -212842618;
long long int var_16 = -2571710037186776830LL;
int var_17 = 590858681;
long long int var_18 = -8976528885651175818LL;
unsigned int var_19 = 727008072U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
