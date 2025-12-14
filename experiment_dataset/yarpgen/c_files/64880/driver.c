#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
short var_8 = (short)15952;
long long int var_15 = 6444316829517896838LL;
int var_16 = -316202036;
signed char var_17 = (signed char)-74;
int zero = 0;
short var_18 = (short)-7544;
long long int var_19 = -5628630840754786904LL;
long long int var_20 = -5864948533912101134LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
