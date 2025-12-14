#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1900423375;
signed char var_1 = (signed char)72;
unsigned long long int var_4 = 3964879155703193770ULL;
int var_6 = -1287578618;
int var_8 = -277850341;
long long int var_11 = 3795350566972439173LL;
int zero = 0;
unsigned char var_12 = (unsigned char)241;
int var_13 = 192492938;
unsigned short var_14 = (unsigned short)47222;
void init() {
}

void checksum() {
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
