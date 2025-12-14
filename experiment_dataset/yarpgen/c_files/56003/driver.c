#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5407744314651144282LL;
unsigned short var_1 = (unsigned short)49108;
unsigned long long int var_2 = 10664755365872843067ULL;
unsigned short var_3 = (unsigned short)65444;
unsigned int var_4 = 3149166116U;
unsigned short var_6 = (unsigned short)20258;
unsigned long long int var_7 = 8388234604781224805ULL;
unsigned long long int var_18 = 17399186359033083900ULL;
int zero = 0;
unsigned long long int var_19 = 17936937323471643892ULL;
signed char var_20 = (signed char)112;
long long int var_21 = 6324220377256505200LL;
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
