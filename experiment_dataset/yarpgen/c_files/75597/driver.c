#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1785514913U;
unsigned long long int var_9 = 10390123359385418565ULL;
unsigned char var_10 = (unsigned char)34;
unsigned int var_12 = 2405374548U;
int var_14 = -1874441138;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 14993410432890339332ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5000374782120220114ULL;
unsigned short var_21 = (unsigned short)8441;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
