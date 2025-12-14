#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4348964234321350212ULL;
unsigned int var_3 = 3742813457U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)64252;
unsigned short var_6 = (unsigned short)24272;
unsigned long long int var_7 = 6556925835001038404ULL;
unsigned long long int var_9 = 8537781470658555700ULL;
unsigned long long int var_10 = 14883656685468600093ULL;
unsigned short var_12 = (unsigned short)41823;
unsigned short var_13 = (unsigned short)26268;
signed char var_14 = (signed char)13;
unsigned long long int var_15 = 16050823118114770595ULL;
int zero = 0;
signed char var_16 = (signed char)-3;
short var_17 = (short)-21974;
unsigned char var_18 = (unsigned char)248;
long long int var_19 = 5984402836309654179LL;
void init() {
}

void checksum() {
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
