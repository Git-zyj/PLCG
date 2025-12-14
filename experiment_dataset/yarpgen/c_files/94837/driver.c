#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned short var_1 = (unsigned short)26915;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3496808454893147948LL;
unsigned long long int var_4 = 6828309873656292948ULL;
unsigned char var_5 = (unsigned char)149;
unsigned long long int var_8 = 2682381687724940232ULL;
unsigned char var_9 = (unsigned char)72;
int zero = 0;
signed char var_10 = (signed char)106;
unsigned long long int var_11 = 1684649226740691548ULL;
signed char var_12 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
