#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-90;
unsigned int var_6 = 1373215589U;
long long int var_7 = -6980902589140009888LL;
int zero = 0;
unsigned long long int var_12 = 5707147382076634760ULL;
unsigned long long int var_13 = 12051346706454151013ULL;
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
