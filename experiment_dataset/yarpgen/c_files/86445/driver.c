#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 674181913787707824LL;
short var_5 = (short)-28217;
unsigned int var_6 = 2680666152U;
unsigned int var_11 = 3361530056U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 548164964U;
long long int var_20 = 8764068448232869750LL;
void init() {
}

void checksum() {
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
