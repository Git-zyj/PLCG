#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6260676997520430246LL;
signed char var_9 = (signed char)-53;
int zero = 0;
unsigned char var_10 = (unsigned char)206;
short var_11 = (short)4672;
long long int var_12 = -1471588378197255882LL;
long long int var_13 = 692364800623818814LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
