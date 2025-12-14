#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6685;
unsigned char var_5 = (unsigned char)175;
unsigned int var_7 = 1232379266U;
long long int var_9 = 382600070498824653LL;
int zero = 0;
short var_12 = (short)18743;
unsigned int var_13 = 1151883637U;
void init() {
}

void checksum() {
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
