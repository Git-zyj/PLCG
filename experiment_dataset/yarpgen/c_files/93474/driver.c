#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 952904245U;
unsigned long long int var_4 = 13254564439589378390ULL;
unsigned short var_17 = (unsigned short)26681;
short var_19 = (short)27618;
int zero = 0;
long long int var_20 = 4452639666048704496LL;
long long int var_21 = 8018716244362678716LL;
long long int var_22 = 8755470819989522667LL;
unsigned char var_23 = (unsigned char)8;
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
