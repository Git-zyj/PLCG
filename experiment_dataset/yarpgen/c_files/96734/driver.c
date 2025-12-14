#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 316039264;
long long int var_1 = 6859565753681586032LL;
unsigned char var_2 = (unsigned char)111;
unsigned char var_6 = (unsigned char)103;
long long int var_9 = -4528080676508103466LL;
unsigned long long int var_16 = 10076535101029433331ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)90;
int var_21 = 244234360;
unsigned char var_22 = (unsigned char)245;
long long int var_23 = 7039859648026712969LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
