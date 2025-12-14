#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7571174074176919604ULL;
unsigned char var_4 = (unsigned char)188;
unsigned short var_7 = (unsigned short)21010;
unsigned char var_9 = (unsigned char)122;
int zero = 0;
unsigned char var_11 = (unsigned char)56;
signed char var_12 = (signed char)-103;
long long int var_13 = -6291149298616280089LL;
void init() {
}

void checksum() {
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
