#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4037474753U;
signed char var_4 = (signed char)98;
signed char var_6 = (signed char)1;
signed char var_8 = (signed char)-12;
long long int var_9 = -1670159601480248421LL;
long long int var_12 = -6384992082050445027LL;
unsigned int var_13 = 4161247793U;
long long int var_14 = 7562887054364402094LL;
signed char var_17 = (signed char)27;
int zero = 0;
long long int var_18 = -289140681763238956LL;
long long int var_19 = 6178707288772728974LL;
long long int var_20 = 833977806379319888LL;
signed char var_21 = (signed char)-77;
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
