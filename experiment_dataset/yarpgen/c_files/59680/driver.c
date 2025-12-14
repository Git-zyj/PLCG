#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3335094173174632898ULL;
_Bool var_3 = (_Bool)0;
long long int var_7 = -8750091193596275511LL;
int var_8 = 584392103;
int var_14 = -703113878;
long long int var_17 = 4968673841103330866LL;
unsigned long long int var_19 = 1851531018831627409ULL;
int zero = 0;
unsigned long long int var_20 = 6990019736726782739ULL;
short var_21 = (short)-27067;
unsigned long long int var_22 = 10415325055231883562ULL;
long long int var_23 = 2494328918009437747LL;
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
