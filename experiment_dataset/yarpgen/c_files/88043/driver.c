#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28530;
short var_8 = (short)-13053;
unsigned int var_12 = 332930923U;
unsigned char var_17 = (unsigned char)156;
int zero = 0;
unsigned long long int var_19 = 4648152931340058930ULL;
long long int var_20 = 4914712107470954632LL;
int var_21 = -606319888;
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
