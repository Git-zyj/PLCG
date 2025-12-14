#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10164690843594947356ULL;
unsigned char var_4 = (unsigned char)145;
long long int var_5 = -2923850449202467778LL;
unsigned long long int var_6 = 12059059126155349043ULL;
signed char var_8 = (signed char)-64;
unsigned char var_9 = (unsigned char)153;
long long int var_10 = 3276736017295400176LL;
int var_11 = 56723371;
int zero = 0;
long long int var_12 = 6738581470489025065LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 2007781547363847771ULL;
unsigned char var_15 = (unsigned char)28;
unsigned char var_16 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
