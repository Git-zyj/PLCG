#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -636038029412740524LL;
int var_1 = -1074469770;
unsigned short var_3 = (unsigned short)17118;
long long int var_5 = -6673008158767259181LL;
long long int var_7 = -3992065102912072528LL;
unsigned short var_9 = (unsigned short)25784;
int zero = 0;
int var_15 = -1810948167;
int var_16 = -1932297454;
unsigned short var_17 = (unsigned short)51343;
int var_18 = 1013401026;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
