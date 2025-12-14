#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4649939246547724318LL;
long long int var_3 = 5944444581521420982LL;
long long int var_4 = 3502690328856760125LL;
_Bool var_5 = (_Bool)0;
int var_7 = 1274580128;
unsigned long long int var_8 = 18100747097475393061ULL;
unsigned long long int var_9 = 4581946901952297809ULL;
unsigned long long int var_10 = 10848776677218200889ULL;
int zero = 0;
unsigned long long int var_12 = 13810625740056389705ULL;
int var_13 = 995410354;
long long int var_14 = 800817786274524069LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
