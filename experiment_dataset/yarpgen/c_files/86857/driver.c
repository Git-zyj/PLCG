#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2723477453635595132ULL;
unsigned long long int var_9 = 17735786244147354830ULL;
unsigned long long int var_10 = 15915437934242802853ULL;
unsigned long long int var_14 = 13488490564182658335ULL;
unsigned long long int var_15 = 3655879616186214517ULL;
unsigned long long int var_16 = 3844265207721108599ULL;
int zero = 0;
unsigned long long int var_17 = 14029608238844187664ULL;
unsigned long long int var_18 = 5807213147905371918ULL;
unsigned long long int var_19 = 3202494506376809174ULL;
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
