#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16895;
unsigned char var_5 = (unsigned char)33;
_Bool var_6 = (_Bool)1;
int var_7 = 1847437971;
unsigned char var_9 = (unsigned char)32;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
int var_14 = -1575054732;
long long int var_15 = 3501168995939319218LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
