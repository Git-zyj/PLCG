#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18942;
long long int var_3 = 4978466552679621505LL;
_Bool var_9 = (_Bool)1;
long long int var_14 = -7190516341728807137LL;
long long int var_17 = 7201262986200314900LL;
int zero = 0;
long long int var_18 = -5166924506982658892LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1378780508658761364LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
