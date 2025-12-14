#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6114017433257679163ULL;
unsigned char var_2 = (unsigned char)213;
unsigned short var_3 = (unsigned short)23738;
int var_4 = 577726106;
unsigned long long int var_5 = 6134104032912414872ULL;
int var_9 = -556538597;
unsigned long long int var_10 = 9649475854715193649ULL;
int var_12 = 1911576818;
short var_14 = (short)-31505;
short var_15 = (short)9259;
unsigned int var_16 = 1721677860U;
unsigned int var_17 = 309917561U;
int zero = 0;
int var_20 = 873988886;
unsigned long long int var_21 = 6102395451446285876ULL;
void init() {
}

void checksum() {
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
