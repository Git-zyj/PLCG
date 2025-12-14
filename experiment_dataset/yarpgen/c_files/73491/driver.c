#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
long long int var_2 = -1771807645454346947LL;
unsigned int var_3 = 2822870225U;
unsigned int var_4 = 443380339U;
unsigned int var_7 = 2989590538U;
signed char var_8 = (signed char)94;
unsigned long long int var_12 = 8287436316289414183ULL;
int var_13 = 1807941769;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1124713741U;
long long int var_20 = -563253765736084650LL;
unsigned short var_21 = (unsigned short)37595;
unsigned short var_22 = (unsigned short)9927;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
