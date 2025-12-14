#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1311536580;
long long int var_1 = -1129651721640631528LL;
signed char var_2 = (signed char)63;
unsigned long long int var_3 = 9883163185590494397ULL;
unsigned char var_4 = (unsigned char)82;
unsigned long long int var_5 = 822347766933805008ULL;
int var_7 = -1221531185;
unsigned long long int var_9 = 6655925987798239468ULL;
int zero = 0;
short var_10 = (short)-8715;
unsigned char var_11 = (unsigned char)231;
long long int var_12 = 9155447174038352368LL;
unsigned short var_13 = (unsigned short)39035;
long long int var_14 = -6166405456004854460LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
