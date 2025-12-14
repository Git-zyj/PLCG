#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)8063;
unsigned short var_4 = (unsigned short)14116;
long long int var_5 = -5815793765780088547LL;
long long int var_6 = -5153845574070204694LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)1143;
unsigned long long int var_9 = 17366336234604545611ULL;
long long int var_10 = -4938911130083003489LL;
int zero = 0;
unsigned long long int var_11 = 2513822220278040463ULL;
long long int var_12 = 1710768283295659740LL;
unsigned long long int var_13 = 13172456066268068937ULL;
signed char var_14 = (signed char)13;
unsigned long long int var_15 = 16365624014907327673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
