#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2746565904U;
unsigned int var_3 = 2129791877U;
unsigned long long int var_5 = 15309467008638518265ULL;
unsigned short var_7 = (unsigned short)2879;
int var_8 = 1364110868;
long long int var_9 = 6773843596899180288LL;
unsigned long long int var_10 = 5248651472507388378ULL;
unsigned short var_11 = (unsigned short)12908;
int zero = 0;
unsigned long long int var_12 = 2286728829547357982ULL;
long long int var_13 = 2511523858985888092LL;
long long int var_14 = -7859075186989351308LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
