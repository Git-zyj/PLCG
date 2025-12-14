#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned int var_1 = 3905743355U;
unsigned short var_2 = (unsigned short)54448;
unsigned char var_3 = (unsigned char)234;
long long int var_4 = -7892549542890130623LL;
int var_6 = 965959196;
unsigned int var_12 = 405934599U;
long long int var_13 = 1304325424983504436LL;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
short var_17 = (short)-10873;
int var_18 = -1997395626;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
