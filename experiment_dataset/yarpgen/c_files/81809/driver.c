#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1050679343071054868ULL;
unsigned short var_3 = (unsigned short)52302;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 1752836761802984898ULL;
unsigned long long int var_8 = 13642753659071741753ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1771014878U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)21388;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)215;
int var_16 = -1149025858;
unsigned short var_17 = (unsigned short)38348;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
