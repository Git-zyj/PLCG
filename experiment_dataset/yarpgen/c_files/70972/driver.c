#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4288971273470677061LL;
unsigned long long int var_2 = 279141347914038856ULL;
int var_4 = 880002865;
unsigned long long int var_9 = 10792468079693030571ULL;
unsigned short var_12 = (unsigned short)23242;
int zero = 0;
long long int var_13 = -4275943246099869013LL;
int var_14 = -819227885;
unsigned long long int var_15 = 10008969058242693675ULL;
unsigned long long int var_16 = 17124651266597459842ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
