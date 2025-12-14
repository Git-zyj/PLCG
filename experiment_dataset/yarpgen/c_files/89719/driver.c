#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3821269531333814062LL;
unsigned int var_3 = 3415040988U;
_Bool var_7 = (_Bool)0;
long long int var_8 = 2248256260272448626LL;
long long int var_9 = 5789046785564598195LL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3433036981U;
unsigned int var_15 = 1297151858U;
long long int var_16 = 3882238347378506569LL;
void init() {
}

void checksum() {
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
