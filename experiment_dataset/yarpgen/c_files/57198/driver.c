#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41466;
unsigned int var_2 = 3841826608U;
unsigned short var_3 = (unsigned short)33942;
unsigned short var_8 = (unsigned short)14698;
unsigned short var_10 = (unsigned short)47093;
long long int var_12 = -4210562167686751503LL;
long long int var_18 = -3981279321806489634LL;
unsigned short var_19 = (unsigned short)21988;
int zero = 0;
unsigned short var_20 = (unsigned short)39202;
unsigned int var_21 = 2106110414U;
void init() {
}

void checksum() {
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
