#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5536923144331676504LL;
int var_7 = -646738976;
long long int var_9 = 1567227155547156630LL;
unsigned char var_10 = (unsigned char)55;
int var_11 = 627162974;
int var_16 = -715026252;
int zero = 0;
unsigned char var_18 = (unsigned char)201;
long long int var_19 = 2563703865694586950LL;
int var_20 = -63675885;
unsigned char var_21 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
