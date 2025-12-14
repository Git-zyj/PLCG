#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)210;
signed char var_7 = (signed char)54;
unsigned char var_8 = (unsigned char)136;
long long int var_12 = 4645914170404388156LL;
long long int var_13 = 6783027107757972448LL;
unsigned char var_18 = (unsigned char)157;
long long int var_19 = -5588876546276394099LL;
int zero = 0;
long long int var_20 = -1130605696954604257LL;
long long int var_21 = -466952851361576626LL;
void init() {
}

void checksum() {
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
