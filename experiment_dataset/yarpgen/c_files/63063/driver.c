#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)82;
unsigned long long int var_3 = 4258128158924186505ULL;
int var_5 = -438862861;
int var_7 = 489880008;
unsigned int var_8 = 1848213786U;
int zero = 0;
unsigned char var_11 = (unsigned char)70;
long long int var_12 = 1292878880314279445LL;
signed char var_13 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
