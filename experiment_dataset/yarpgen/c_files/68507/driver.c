#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20018;
unsigned long long int var_1 = 4409846195002250726ULL;
unsigned char var_3 = (unsigned char)10;
long long int var_4 = 8728264461373409904LL;
short var_6 = (short)-7906;
unsigned long long int var_7 = 15388251123063544427ULL;
unsigned long long int var_8 = 13208221929413723430ULL;
int zero = 0;
int var_10 = 1236036893;
unsigned short var_11 = (unsigned short)7473;
unsigned char var_12 = (unsigned char)159;
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
