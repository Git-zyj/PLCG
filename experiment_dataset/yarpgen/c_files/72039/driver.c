#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6411869334992263121LL;
long long int var_1 = 7435664558379560366LL;
long long int var_2 = 3137286698636987338LL;
long long int var_3 = 5646481266775527324LL;
long long int var_4 = 217035189103809354LL;
long long int var_5 = 7150635553500272787LL;
long long int var_6 = -2586966276673169177LL;
long long int var_7 = 5029925720119610914LL;
long long int var_8 = -2640944575830172102LL;
long long int var_9 = -5115043257298380890LL;
long long int var_10 = -8171742529974630328LL;
int zero = 0;
long long int var_11 = -6285541522913204685LL;
long long int var_12 = 3927038377930070358LL;
long long int var_13 = 1166980317633241454LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
