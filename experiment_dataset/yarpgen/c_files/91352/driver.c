#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned int var_1 = 776320520U;
unsigned int var_3 = 3322120861U;
unsigned char var_6 = (unsigned char)250;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 2689180836668310372ULL;
long long int var_11 = -7165430251173190066LL;
unsigned long long int var_12 = 5038679888164092298ULL;
signed char var_15 = (signed char)-2;
long long int var_17 = -8067318460057803956LL;
unsigned short var_18 = (unsigned short)59157;
int zero = 0;
long long int var_20 = 3519196212180140142LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 9762406038045452792ULL;
unsigned char var_23 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
