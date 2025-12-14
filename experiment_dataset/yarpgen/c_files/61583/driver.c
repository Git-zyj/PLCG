#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10401145012393718021ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -1919148183;
unsigned char var_4 = (unsigned char)146;
short var_8 = (short)3361;
short var_11 = (short)5389;
short var_12 = (short)-27816;
long long int var_13 = 8686111597416647270LL;
long long int var_14 = 9186646773863290064LL;
int zero = 0;
unsigned long long int var_15 = 8144370639449296912ULL;
unsigned char var_16 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
