#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5495979286024570962ULL;
unsigned long long int var_2 = 17106836284363198864ULL;
int var_3 = 1676039699;
int var_5 = -1336634379;
unsigned int var_8 = 3117863503U;
unsigned long long int var_9 = 14146165092305370750ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 143985597679036168ULL;
int var_15 = 2006439930;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2827944140U;
int var_19 = -2102315055;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
