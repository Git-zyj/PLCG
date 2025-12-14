#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3178996745U;
long long int var_2 = -4302905215970938701LL;
signed char var_3 = (signed char)-107;
int var_4 = -889777814;
signed char var_5 = (signed char)3;
unsigned short var_7 = (unsigned short)20202;
unsigned char var_8 = (unsigned char)54;
int var_9 = -1312847391;
int var_10 = 459839801;
int zero = 0;
long long int var_12 = -5959692750610368247LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
