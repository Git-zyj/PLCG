#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17664989601588710482ULL;
int var_3 = -1520059106;
unsigned char var_5 = (unsigned char)104;
int var_13 = -1666357757;
long long int var_15 = -2126454375129112267LL;
long long int var_17 = 2616228382458705445LL;
signed char var_18 = (signed char)-45;
int zero = 0;
unsigned char var_19 = (unsigned char)200;
unsigned short var_20 = (unsigned short)57437;
long long int var_21 = -4853433010220059935LL;
long long int var_22 = -50218568321877307LL;
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
