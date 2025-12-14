#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27247;
unsigned int var_3 = 4102469978U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 8897788554513580595ULL;
unsigned char var_8 = (unsigned char)138;
long long int var_9 = 5465707099049475640LL;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
long long int var_14 = -7067597101382874044LL;
_Bool var_15 = (_Bool)1;
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
