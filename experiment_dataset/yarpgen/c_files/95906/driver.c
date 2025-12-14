#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6536137558988562792LL;
long long int var_2 = 1105213690892257022LL;
signed char var_4 = (signed char)89;
unsigned char var_7 = (unsigned char)176;
unsigned char var_8 = (unsigned char)64;
signed char var_9 = (signed char)126;
signed char var_10 = (signed char)3;
unsigned long long int var_14 = 10846114902755459809ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)2193;
unsigned char var_16 = (unsigned char)115;
unsigned char var_17 = (unsigned char)111;
int var_18 = 1921333474;
signed char var_19 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
