#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1072308880U;
int var_2 = -264041910;
long long int var_4 = -812289570457692806LL;
unsigned int var_5 = 186050408U;
unsigned int var_6 = 203712419U;
unsigned char var_8 = (unsigned char)98;
unsigned char var_9 = (unsigned char)67;
unsigned char var_11 = (unsigned char)108;
short var_12 = (short)9913;
unsigned int var_13 = 2327308335U;
short var_16 = (short)31769;
int zero = 0;
unsigned long long int var_17 = 228844629995049842ULL;
unsigned char var_18 = (unsigned char)4;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
