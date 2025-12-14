#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 481827975;
signed char var_2 = (signed char)-116;
unsigned short var_3 = (unsigned short)60620;
unsigned long long int var_4 = 18054061766435813885ULL;
signed char var_7 = (signed char)-61;
int var_10 = 1284414803;
long long int var_12 = 3785731164522872481LL;
unsigned long long int var_13 = 4746703099324283275ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-70;
void init() {
}

void checksum() {
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
