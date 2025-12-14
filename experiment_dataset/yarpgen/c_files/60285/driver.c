#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned short var_2 = (unsigned short)24118;
int var_3 = -1737125266;
long long int var_6 = 3330254463292313831LL;
long long int var_7 = 5513893599119641687LL;
int var_8 = 831896462;
unsigned int var_10 = 1646636190U;
unsigned short var_11 = (unsigned short)63028;
long long int var_18 = 620799573282637738LL;
int zero = 0;
unsigned int var_20 = 286932297U;
unsigned int var_21 = 4237992246U;
unsigned char var_22 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
