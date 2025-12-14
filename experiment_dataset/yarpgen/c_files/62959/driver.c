#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7732239398291408230LL;
long long int var_3 = -3068105054281120791LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 3123691916288116147LL;
long long int var_7 = -7953818520024175028LL;
long long int var_8 = 7013528418405370928LL;
long long int var_12 = 4813079713168580841LL;
long long int var_13 = 38744377060383285LL;
_Bool var_14 = (_Bool)1;
int var_15 = -1050479051;
long long int var_16 = 3786294427153823341LL;
int zero = 0;
short var_18 = (short)-14489;
long long int var_19 = 9004685403095756978LL;
long long int var_20 = 4629577768957739765LL;
int var_21 = 1162613434;
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
