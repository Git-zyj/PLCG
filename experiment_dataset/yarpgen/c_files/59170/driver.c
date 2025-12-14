#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8849594476331769886LL;
unsigned char var_5 = (unsigned char)254;
unsigned short var_7 = (unsigned short)36395;
unsigned long long int var_11 = 15778153206628629673ULL;
signed char var_18 = (signed char)-59;
int zero = 0;
unsigned short var_19 = (unsigned short)46872;
unsigned char var_20 = (unsigned char)160;
unsigned short var_21 = (unsigned short)11835;
unsigned int var_22 = 1808057448U;
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
