#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5361876267906623701ULL;
long long int var_13 = -1046377965207534240LL;
unsigned short var_15 = (unsigned short)34277;
unsigned char var_16 = (unsigned char)120;
int zero = 0;
unsigned char var_17 = (unsigned char)210;
long long int var_18 = 3818312429158849750LL;
long long int var_19 = 5756173989102833454LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
