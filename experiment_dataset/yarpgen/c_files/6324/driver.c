#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7999123079144886852LL;
long long int var_2 = 7372150646701294160LL;
unsigned short var_3 = (unsigned short)62685;
unsigned char var_4 = (unsigned char)34;
long long int var_6 = -6241025525494397004LL;
int var_7 = -1240251410;
unsigned short var_8 = (unsigned short)53313;
int zero = 0;
short var_10 = (short)26130;
unsigned long long int var_11 = 6527866368392713083ULL;
unsigned long long int var_12 = 14585060365388576021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
