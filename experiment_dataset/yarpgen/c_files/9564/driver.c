#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 697624741;
unsigned char var_7 = (unsigned char)111;
unsigned short var_13 = (unsigned short)1620;
unsigned long long int var_16 = 283036773286494993ULL;
unsigned char var_18 = (unsigned char)188;
int zero = 0;
long long int var_19 = -9041842852536955931LL;
unsigned long long int var_20 = 3923239241818689120ULL;
unsigned short var_21 = (unsigned short)31521;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
