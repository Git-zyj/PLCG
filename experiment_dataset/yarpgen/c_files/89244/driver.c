#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned char var_1 = (unsigned char)162;
unsigned char var_3 = (unsigned char)20;
unsigned long long int var_4 = 5619756926168871286ULL;
short var_9 = (short)-15094;
long long int var_11 = 4642460087659293928LL;
int var_13 = -1951230827;
long long int var_14 = -78211285524449339LL;
long long int var_16 = 8294841452245262846LL;
signed char var_17 = (signed char)58;
long long int var_18 = -5559378047980611513LL;
short var_19 = (short)10662;
int zero = 0;
long long int var_20 = -653392366901716564LL;
signed char var_21 = (signed char)122;
short var_22 = (short)31921;
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
