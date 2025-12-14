#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1098210421;
unsigned long long int var_5 = 17386579198885088742ULL;
unsigned long long int var_6 = 9333512897208139431ULL;
short var_8 = (short)-21477;
unsigned short var_9 = (unsigned short)3465;
unsigned long long int var_10 = 8104995927759535227ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9856657719995136331ULL;
unsigned char var_13 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
