#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2967593447280690647LL;
long long int var_1 = 744584533120997578LL;
unsigned short var_4 = (unsigned short)17069;
signed char var_6 = (signed char)-5;
unsigned int var_9 = 303120413U;
int zero = 0;
unsigned char var_12 = (unsigned char)28;
unsigned long long int var_13 = 13230660778590374111ULL;
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
