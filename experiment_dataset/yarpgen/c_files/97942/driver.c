#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
unsigned long long int var_2 = 396803859109887510ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)43300;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)37772;
int zero = 0;
unsigned long long int var_14 = 11383880077763020825ULL;
long long int var_15 = -6149071062261147916LL;
unsigned short var_16 = (unsigned short)46467;
unsigned long long int var_17 = 6859056916990384938ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
