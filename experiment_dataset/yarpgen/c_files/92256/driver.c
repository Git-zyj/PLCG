#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
unsigned long long int var_5 = 8505709346324824450ULL;
unsigned long long int var_12 = 3462359416726274851ULL;
unsigned short var_16 = (unsigned short)25271;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14375562576715895323ULL;
unsigned short var_21 = (unsigned short)27569;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
