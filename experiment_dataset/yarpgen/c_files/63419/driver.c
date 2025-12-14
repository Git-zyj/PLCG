#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 666194520220629440LL;
unsigned long long int var_1 = 2450236219318797633ULL;
unsigned long long int var_2 = 922713632246218337ULL;
unsigned char var_3 = (unsigned char)67;
short var_4 = (short)17451;
unsigned int var_5 = 3313723921U;
unsigned short var_6 = (unsigned short)53152;
long long int var_7 = -1221659020789844366LL;
unsigned long long int var_8 = 1245783387054784834ULL;
unsigned int var_10 = 3983692213U;
int zero = 0;
signed char var_11 = (signed char)-16;
unsigned char var_12 = (unsigned char)146;
int var_13 = 1144917458;
unsigned char var_14 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
