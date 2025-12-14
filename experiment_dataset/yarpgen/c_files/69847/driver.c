#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_6 = 3973620243347126548LL;
long long int var_7 = 618251685922014443LL;
signed char var_11 = (signed char)98;
int zero = 0;
unsigned char var_13 = (unsigned char)168;
unsigned short var_14 = (unsigned short)572;
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
