#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9026411057819127073LL;
int var_1 = -361268460;
unsigned long long int var_2 = 3268586586091610911ULL;
unsigned int var_3 = 3239285732U;
int var_5 = -1246316324;
unsigned long long int var_6 = 11784975826193569525ULL;
unsigned long long int var_7 = 15377237224982560386ULL;
unsigned short var_8 = (unsigned short)30031;
unsigned short var_10 = (unsigned short)20610;
unsigned long long int var_11 = 6309564070273629622ULL;
signed char var_12 = (signed char)25;
short var_13 = (short)-11306;
long long int var_14 = -2543241619747720406LL;
int var_15 = 1201398645;
unsigned short var_16 = (unsigned short)17548;
int var_17 = 282020034;
int zero = 0;
unsigned int var_18 = 1121371984U;
unsigned short var_19 = (unsigned short)24551;
unsigned int var_20 = 3484644484U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
