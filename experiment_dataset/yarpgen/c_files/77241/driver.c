#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4718956535570531594LL;
unsigned short var_3 = (unsigned short)50338;
short var_6 = (short)-20677;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)152;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 15166749722833729554ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)225;
long long int var_13 = 4580747853100961962LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
