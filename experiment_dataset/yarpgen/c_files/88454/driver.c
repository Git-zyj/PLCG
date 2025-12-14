#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14943892228380975160ULL;
unsigned long long int var_1 = 4883741602882373316ULL;
unsigned long long int var_2 = 15153493623718114451ULL;
unsigned long long int var_5 = 9597871481499122284ULL;
unsigned long long int var_6 = 7426140634340168041ULL;
unsigned long long int var_7 = 3070973338639063481ULL;
unsigned long long int var_9 = 3904434620357311289ULL;
unsigned long long int var_10 = 9489028415526277295ULL;
int zero = 0;
unsigned long long int var_11 = 8615377254061652464ULL;
unsigned long long int var_12 = 4315076787717194547ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
