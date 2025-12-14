#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16913927601871191090ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -6361971624772037432LL;
long long int var_11 = 4965774358383767468LL;
short var_14 = (short)-22781;
int zero = 0;
short var_17 = (short)26060;
unsigned int var_18 = 3990754792U;
int var_19 = -1140816912;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
