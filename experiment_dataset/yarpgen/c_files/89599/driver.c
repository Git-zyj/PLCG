#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10849910718051360857ULL;
signed char var_3 = (signed char)-116;
signed char var_4 = (signed char)61;
unsigned char var_5 = (unsigned char)35;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1085230600U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)39;
int var_11 = 1763587569;
unsigned int var_15 = 2168270001U;
short var_16 = (short)9191;
unsigned char var_17 = (unsigned char)67;
int zero = 0;
unsigned char var_18 = (unsigned char)38;
signed char var_19 = (signed char)-25;
unsigned short var_20 = (unsigned short)34959;
int var_21 = -1774345847;
void init() {
}

void checksum() {
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
