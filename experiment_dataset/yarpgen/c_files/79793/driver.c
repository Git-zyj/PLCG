#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1533332670U;
signed char var_2 = (signed char)-73;
signed char var_7 = (signed char)54;
long long int var_11 = 8010129886502875570LL;
int zero = 0;
signed char var_13 = (signed char)71;
unsigned char var_14 = (unsigned char)199;
signed char var_15 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
