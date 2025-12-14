#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -588271376;
long long int var_11 = 1394356219706254042LL;
unsigned int var_12 = 3808589909U;
int var_14 = -541781190;
unsigned char var_16 = (unsigned char)250;
unsigned char var_18 = (unsigned char)169;
int zero = 0;
unsigned int var_20 = 551260257U;
unsigned char var_21 = (unsigned char)150;
unsigned char var_22 = (unsigned char)197;
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
