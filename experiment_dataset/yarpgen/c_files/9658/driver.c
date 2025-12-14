#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2192152519827080222LL;
short var_1 = (short)-26735;
int var_3 = -376991131;
unsigned char var_4 = (unsigned char)148;
unsigned char var_5 = (unsigned char)189;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-1041;
unsigned long long int var_11 = 2532631889436282715ULL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-66;
unsigned char var_16 = (unsigned char)33;
int zero = 0;
signed char var_18 = (signed char)108;
unsigned char var_19 = (unsigned char)228;
long long int var_20 = 3216307991546837018LL;
signed char var_21 = (signed char)-31;
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
