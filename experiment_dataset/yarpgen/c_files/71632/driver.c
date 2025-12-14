#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1041087274U;
unsigned long long int var_6 = 11571267025958917496ULL;
unsigned long long int var_10 = 16198631474577261380ULL;
long long int var_11 = -2258900863955066145LL;
unsigned short var_13 = (unsigned short)30906;
int zero = 0;
unsigned short var_19 = (unsigned short)46907;
long long int var_20 = -4577227602944066068LL;
unsigned int var_21 = 4272676465U;
unsigned long long int var_22 = 931620312365106151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
