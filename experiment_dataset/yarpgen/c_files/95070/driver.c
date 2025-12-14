#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 581483417;
int var_6 = -1913597223;
long long int var_11 = 4443782934294517526LL;
unsigned short var_12 = (unsigned short)63992;
int zero = 0;
unsigned char var_19 = (unsigned char)54;
long long int var_20 = -9002735883596804139LL;
int var_21 = -2089054781;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
