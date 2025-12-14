#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)13937;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)50930;
int zero = 0;
int var_10 = 1020748490;
int var_11 = 637753991;
unsigned int var_12 = 2210622943U;
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
