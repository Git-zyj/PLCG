#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)80;
short var_5 = (short)-12771;
short var_6 = (short)10607;
long long int var_7 = -2395686034932419486LL;
unsigned char var_9 = (unsigned char)177;
long long int var_12 = 277010800958155184LL;
unsigned long long int var_14 = 8472549473389916324ULL;
unsigned char var_15 = (unsigned char)147;
signed char var_16 = (signed char)-51;
int zero = 0;
unsigned short var_19 = (unsigned short)44038;
unsigned short var_20 = (unsigned short)46074;
signed char var_21 = (signed char)-127;
int var_22 = 356201790;
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
