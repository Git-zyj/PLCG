#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
unsigned short var_4 = (unsigned short)7461;
int var_7 = -1294805093;
int var_9 = 830622990;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 6362784545293530489LL;
unsigned char var_13 = (unsigned char)111;
int var_14 = 1555758102;
long long int var_15 = -160119038197180103LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
