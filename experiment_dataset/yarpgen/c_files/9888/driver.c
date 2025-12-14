#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4826493712112738621LL;
long long int var_5 = 3423647636589104864LL;
long long int var_6 = 8351430242981984827LL;
long long int var_10 = -625497240511432733LL;
long long int var_14 = -6473819854196390289LL;
int zero = 0;
long long int var_18 = -3154119308462512848LL;
long long int var_19 = 367011599473141852LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
