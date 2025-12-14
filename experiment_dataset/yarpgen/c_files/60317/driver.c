#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6883700744431515121LL;
int var_5 = 793808351;
unsigned int var_7 = 319072644U;
long long int var_8 = 981882117477128831LL;
signed char var_9 = (signed char)-60;
long long int var_10 = -3359513947672420945LL;
unsigned int var_11 = 1567661039U;
int zero = 0;
unsigned int var_13 = 1892703980U;
int var_14 = -1191699374;
long long int var_15 = -4631245219360929810LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
