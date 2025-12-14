#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
unsigned char var_3 = (unsigned char)163;
unsigned int var_4 = 4188512862U;
int var_5 = 1317313688;
unsigned char var_7 = (unsigned char)103;
signed char var_8 = (signed char)-101;
int var_9 = -935945904;
unsigned long long int var_10 = 6896151374304203123ULL;
unsigned int var_11 = 4141728816U;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 2713151709U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)124;
int zero = 0;
signed char var_20 = (signed char)96;
unsigned short var_21 = (unsigned short)34103;
signed char var_22 = (signed char)-79;
unsigned int var_23 = 2476728588U;
unsigned long long int var_24 = 11202298943429055301ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
