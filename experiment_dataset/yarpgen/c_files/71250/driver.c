#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10080063271912463876ULL;
int var_2 = -157067591;
unsigned short var_3 = (unsigned short)28866;
int var_4 = 367649322;
unsigned long long int var_5 = 12108168442120143282ULL;
unsigned long long int var_6 = 15586907037760412643ULL;
int var_8 = -1954202076;
long long int var_9 = -3027563386406985592LL;
int zero = 0;
long long int var_14 = 4480084730293084351LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-4212;
unsigned short var_17 = (unsigned short)3425;
long long int var_18 = 5588368970738007795LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
