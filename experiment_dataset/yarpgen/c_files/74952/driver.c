#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10480153100334809095ULL;
int var_2 = -845275510;
long long int var_4 = -2510666626291917896LL;
long long int var_5 = 9127562890949096868LL;
short var_6 = (short)592;
unsigned short var_8 = (unsigned short)58557;
long long int var_10 = 4866207491589569169LL;
int zero = 0;
unsigned long long int var_11 = 9632169526895411796ULL;
unsigned int var_12 = 4092594557U;
unsigned long long int var_13 = 17053384350572604827ULL;
unsigned char var_14 = (unsigned char)9;
unsigned int var_15 = 2771580873U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
