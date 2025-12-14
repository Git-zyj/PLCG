#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4257625238940505043ULL;
unsigned char var_2 = (unsigned char)20;
unsigned int var_7 = 2707050956U;
int zero = 0;
unsigned long long int var_18 = 11900422313304607432ULL;
unsigned char var_19 = (unsigned char)20;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2596169710987743845ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
