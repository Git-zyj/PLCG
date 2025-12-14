#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4320583687122049343LL;
int var_2 = 495209586;
unsigned char var_5 = (unsigned char)127;
long long int var_6 = -1106307420774828602LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 17770289794080684829ULL;
int zero = 0;
long long int var_12 = -9016111570717641625LL;
unsigned char var_13 = (unsigned char)249;
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
