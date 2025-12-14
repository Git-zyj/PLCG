#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2493960579422873574LL;
long long int var_9 = 3073613368512087521LL;
unsigned short var_10 = (unsigned short)25339;
int zero = 0;
unsigned long long int var_11 = 15631453619006268964ULL;
long long int var_12 = -7448407251941361270LL;
_Bool var_13 = (_Bool)1;
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
