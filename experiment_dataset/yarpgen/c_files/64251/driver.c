#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3161197212U;
int var_2 = -1666927012;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)53346;
long long int var_9 = -2651849071767193435LL;
int var_11 = -351487091;
long long int var_15 = -8970254219691694398LL;
int var_16 = -1265070066;
int zero = 0;
int var_18 = 772713364;
unsigned long long int var_19 = 5872976924769702098ULL;
signed char var_20 = (signed char)-65;
signed char var_21 = (signed char)95;
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
