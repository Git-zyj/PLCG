#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14557850108051130627ULL;
unsigned char var_1 = (unsigned char)6;
int var_3 = -690001559;
long long int var_8 = -4684953850332984007LL;
unsigned long long int var_9 = 6692630998416378890ULL;
unsigned char var_10 = (unsigned char)39;
int zero = 0;
int var_11 = 405461515;
unsigned int var_12 = 51277560U;
long long int var_13 = -5611570524056543320LL;
int var_14 = -2069616717;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
