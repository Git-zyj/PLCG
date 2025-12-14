#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1055699992864962011ULL;
unsigned long long int var_5 = 15758411456747086898ULL;
long long int var_10 = -6146780104212490110LL;
int var_11 = 628823512;
unsigned long long int var_14 = 2810442980989212961ULL;
int zero = 0;
unsigned int var_16 = 2041956356U;
unsigned int var_17 = 3151554645U;
unsigned long long int var_18 = 14666907945552802751ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
