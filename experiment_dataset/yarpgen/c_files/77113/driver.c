#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53200;
int var_4 = -1611310769;
signed char var_6 = (signed char)103;
int var_7 = -964039514;
long long int var_9 = -3661132017251542852LL;
unsigned char var_10 = (unsigned char)95;
unsigned long long int var_11 = 17816149036967772836ULL;
unsigned char var_12 = (unsigned char)23;
short var_15 = (short)5206;
unsigned long long int var_16 = 6436565804096076457ULL;
int zero = 0;
short var_17 = (short)14861;
int var_18 = 1813579069;
short var_19 = (short)-20183;
unsigned char var_20 = (unsigned char)250;
long long int var_21 = 2372436693483375609LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
