#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4462086875871216107LL;
unsigned short var_2 = (unsigned short)61973;
long long int var_3 = 619943133435507527LL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-60;
int zero = 0;
unsigned char var_13 = (unsigned char)156;
unsigned short var_14 = (unsigned short)35773;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
