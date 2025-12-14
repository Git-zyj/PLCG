#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 827589006;
unsigned long long int var_3 = 11129165682933318708ULL;
short var_4 = (short)-14884;
long long int var_6 = 5373099112242589787LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6303236528598465154LL;
short var_10 = (short)10627;
long long int var_12 = 7682035129826188926LL;
unsigned short var_14 = (unsigned short)17529;
unsigned long long int var_15 = 4926972863219199539ULL;
int var_17 = -980362472;
long long int var_18 = -2685783278106742139LL;
int zero = 0;
short var_20 = (short)-27833;
long long int var_21 = 6548499898245291924LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 18027394271994878595ULL;
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
