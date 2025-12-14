#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5981658179959646941LL;
long long int var_1 = -5758416258970399549LL;
long long int var_4 = 1220398274363205913LL;
long long int var_5 = -1428347675072923690LL;
long long int var_10 = 1414978027017315808LL;
long long int var_11 = 6270566921006133800LL;
long long int var_13 = 1761568414812345018LL;
int zero = 0;
long long int var_16 = 9189550147420269968LL;
long long int var_17 = -4494776741855215919LL;
long long int var_18 = -4883374960284200819LL;
long long int var_19 = 3175025228194998197LL;
long long int var_20 = 7693786221358367852LL;
long long int var_21 = -3391285999688831345LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
