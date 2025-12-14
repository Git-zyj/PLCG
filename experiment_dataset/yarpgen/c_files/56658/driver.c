#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1721131617299343733LL;
short var_4 = (short)-4187;
int var_6 = 219460526;
unsigned char var_7 = (unsigned char)25;
unsigned char var_10 = (unsigned char)150;
unsigned char var_12 = (unsigned char)32;
int var_13 = 736706698;
int zero = 0;
unsigned char var_20 = (unsigned char)3;
long long int var_21 = -4276073138566870442LL;
unsigned long long int var_22 = 8277285357746342431ULL;
void init() {
}

void checksum() {
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
