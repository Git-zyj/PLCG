#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13596312598926228040ULL;
long long int var_1 = 8198255480242361287LL;
unsigned short var_2 = (unsigned short)28185;
unsigned short var_3 = (unsigned short)43492;
short var_4 = (short)-29508;
unsigned long long int var_5 = 17968021830073723997ULL;
unsigned long long int var_7 = 8584369472075321528ULL;
unsigned long long int var_8 = 9518981801522254252ULL;
unsigned short var_10 = (unsigned short)51022;
signed char var_11 = (signed char)118;
int zero = 0;
long long int var_13 = 3628359657486043032LL;
unsigned long long int var_14 = 13542613764204168283ULL;
unsigned long long int var_15 = 10091763049715285123ULL;
unsigned short var_16 = (unsigned short)22212;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
