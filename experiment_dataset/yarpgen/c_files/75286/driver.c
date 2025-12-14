#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4102821239U;
signed char var_1 = (signed char)115;
unsigned int var_2 = 1570657603U;
unsigned char var_3 = (unsigned char)92;
int var_4 = 296276794;
unsigned short var_5 = (unsigned short)2609;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)74;
signed char var_8 = (signed char)64;
unsigned char var_9 = (unsigned char)82;
signed char var_10 = (signed char)-71;
long long int var_11 = -1818108354018311879LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)23;
int var_14 = -1467314104;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 11033389731265913218ULL;
int zero = 0;
signed char var_17 = (signed char)93;
unsigned long long int var_18 = 14281132694062033984ULL;
long long int var_19 = 1802876969663571716LL;
unsigned char var_20 = (unsigned char)138;
unsigned short var_21 = (unsigned short)30161;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
