#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1699628729;
unsigned short var_5 = (unsigned short)54688;
unsigned char var_6 = (unsigned char)198;
long long int var_9 = -5864700779923573382LL;
unsigned long long int var_12 = 1955169137167134343ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)25;
unsigned short var_14 = (unsigned short)55083;
short var_15 = (short)1528;
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
