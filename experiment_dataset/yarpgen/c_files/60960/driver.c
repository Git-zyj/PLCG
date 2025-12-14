#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18317;
int var_5 = 2061867781;
unsigned short var_6 = (unsigned short)562;
unsigned long long int var_11 = 4125161358788994201ULL;
int var_13 = -478132779;
int var_15 = -1282252581;
unsigned int var_16 = 824435119U;
int zero = 0;
int var_18 = 393942530;
short var_19 = (short)-25959;
short var_20 = (short)4325;
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
