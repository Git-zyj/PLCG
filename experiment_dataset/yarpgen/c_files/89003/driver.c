#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
_Bool var_1 = (_Bool)0;
long long int var_6 = -1353468760017266623LL;
int var_7 = -1497062156;
unsigned int var_9 = 3675358775U;
int zero = 0;
int var_14 = 963495975;
unsigned char var_15 = (unsigned char)171;
long long int var_16 = 345453939610356147LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
