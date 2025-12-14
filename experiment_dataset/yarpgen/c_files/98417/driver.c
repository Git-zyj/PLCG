#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 379446563;
unsigned char var_6 = (unsigned char)111;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 3800997509U;
unsigned long long int var_13 = 15909075082571621773ULL;
int var_15 = 189097331;
int zero = 0;
unsigned char var_18 = (unsigned char)111;
unsigned int var_19 = 1872844675U;
unsigned long long int var_20 = 4902498367468065393ULL;
short var_21 = (short)-768;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
