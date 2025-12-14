#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1453509728;
int var_2 = -29859274;
int var_3 = -588644413;
unsigned short var_4 = (unsigned short)22484;
int var_5 = 1785336118;
unsigned short var_6 = (unsigned short)10625;
unsigned char var_8 = (unsigned char)85;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 2886224277214284792LL;
unsigned long long int var_11 = 10311820309301688653ULL;
unsigned long long int var_12 = 1990589025720415810ULL;
unsigned long long int var_13 = 9995509742332255774ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
