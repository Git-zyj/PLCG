#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2468135778U;
unsigned char var_1 = (unsigned char)207;
int var_3 = 275682128;
long long int var_6 = 9179331938073834856LL;
unsigned char var_8 = (unsigned char)135;
unsigned char var_9 = (unsigned char)51;
unsigned int var_10 = 2490294544U;
int zero = 0;
unsigned long long int var_13 = 1761136599053181986ULL;
signed char var_14 = (signed char)-103;
void init() {
}

void checksum() {
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
