#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)106;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)10462;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)216;
unsigned short var_13 = (unsigned short)49485;
_Bool var_14 = (_Bool)1;
unsigned char var_17 = (unsigned char)224;
int zero = 0;
long long int var_19 = -523366606555830800LL;
unsigned short var_20 = (unsigned short)10632;
unsigned long long int var_21 = 1978658124049412346ULL;
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
