#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16790192102233165367ULL;
unsigned short var_3 = (unsigned short)57722;
long long int var_4 = 2486328304144025571LL;
unsigned char var_8 = (unsigned char)63;
int var_9 = -951287650;
int zero = 0;
unsigned long long int var_10 = 7562006862193816619ULL;
unsigned short var_11 = (unsigned short)53966;
unsigned short var_12 = (unsigned short)36513;
unsigned char var_13 = (unsigned char)145;
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
