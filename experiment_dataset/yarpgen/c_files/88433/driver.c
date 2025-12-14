#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5564320640647296875LL;
unsigned long long int var_2 = 17524095316091254519ULL;
unsigned long long int var_7 = 2873360094071359777ULL;
signed char var_9 = (signed char)-123;
signed char var_13 = (signed char)-52;
unsigned long long int var_14 = 16955621399274974563ULL;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
long long int var_19 = 9214967249519896220LL;
unsigned long long int var_20 = 12422599350726577859ULL;
long long int var_21 = 6427889338387326632LL;
void init() {
}

void checksum() {
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
