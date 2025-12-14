#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1035093786;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6470401789493382325LL;
short var_5 = (short)-18274;
short var_7 = (short)6864;
unsigned char var_9 = (unsigned char)26;
int zero = 0;
short var_10 = (short)-3803;
unsigned short var_11 = (unsigned short)54418;
int var_12 = -702800645;
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
