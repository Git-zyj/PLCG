#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13140;
unsigned char var_5 = (unsigned char)145;
unsigned int var_7 = 2321101279U;
int zero = 0;
unsigned short var_10 = (unsigned short)564;
long long int var_11 = 2811365175879464478LL;
unsigned long long int var_12 = 14787615629763383552ULL;
long long int var_13 = 6020416975181133013LL;
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
