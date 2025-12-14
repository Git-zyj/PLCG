#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)61457;
unsigned char var_3 = (unsigned char)78;
signed char var_4 = (signed char)71;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 11938207966154591707ULL;
signed char var_8 = (signed char)17;
unsigned long long int var_9 = 7974059005236882339ULL;
unsigned int var_10 = 2331834222U;
long long int var_11 = -1765303198962294445LL;
unsigned long long int var_12 = 12470751538789560013ULL;
signed char var_13 = (signed char)-29;
unsigned long long int var_16 = 8643586718277280373ULL;
unsigned char var_17 = (unsigned char)151;
unsigned char var_18 = (unsigned char)111;
unsigned short var_19 = (unsigned short)47448;
int zero = 0;
unsigned long long int var_20 = 15970240951195778048ULL;
unsigned int var_21 = 3283858440U;
signed char var_22 = (signed char)-112;
unsigned char var_23 = (unsigned char)223;
signed char var_24 = (signed char)-1;
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
