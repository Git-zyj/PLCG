#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2248905379074630589LL;
long long int var_3 = -3966459053280550875LL;
long long int var_5 = 8472693543109298465LL;
long long int var_6 = 310196797160690134LL;
long long int var_7 = 8795491415781074678LL;
long long int var_9 = -8502038523227222413LL;
long long int var_10 = 4891238259793765435LL;
long long int var_11 = -3187945504886266373LL;
long long int var_14 = -2843330596098821092LL;
int zero = 0;
long long int var_15 = -8110636204982493303LL;
long long int var_16 = -8170070262109275785LL;
long long int var_17 = -6110585155169397429LL;
long long int var_18 = 5583733666679267316LL;
long long int var_19 = -584999712396544783LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
