#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)17748;
unsigned char var_8 = (unsigned char)160;
short var_11 = (short)-23313;
unsigned char var_14 = (unsigned char)46;
unsigned long long int var_17 = 3041251440663318767ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1503399689;
unsigned short var_21 = (unsigned short)38992;
short var_22 = (short)-27001;
int var_23 = -433142996;
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
