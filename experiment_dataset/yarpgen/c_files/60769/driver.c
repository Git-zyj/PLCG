#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4013340035858741239LL;
unsigned char var_2 = (unsigned char)208;
unsigned short var_3 = (unsigned short)19395;
unsigned int var_12 = 449645650U;
int zero = 0;
long long int var_13 = 2580811333895766399LL;
long long int var_14 = 8707687155329530938LL;
signed char var_15 = (signed char)-57;
void init() {
}

void checksum() {
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
