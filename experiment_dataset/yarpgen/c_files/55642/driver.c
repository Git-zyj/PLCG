#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3754324300491861630LL;
short var_1 = (short)-18157;
unsigned short var_3 = (unsigned short)14711;
unsigned int var_6 = 52660770U;
unsigned int var_7 = 568782188U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 455332649U;
int zero = 0;
unsigned char var_10 = (unsigned char)70;
long long int var_11 = 8870791572848517181LL;
int var_12 = -1053214039;
unsigned int var_13 = 2687676289U;
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
