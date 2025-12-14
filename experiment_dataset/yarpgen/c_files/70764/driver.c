#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6143268887049522651LL;
signed char var_1 = (signed char)108;
unsigned short var_2 = (unsigned short)17718;
unsigned char var_4 = (unsigned char)167;
unsigned long long int var_7 = 4531415105735241734ULL;
signed char var_8 = (signed char)-45;
unsigned char var_9 = (unsigned char)44;
int zero = 0;
unsigned short var_11 = (unsigned short)21124;
unsigned long long int var_12 = 7956021972600761723ULL;
unsigned short var_13 = (unsigned short)49254;
unsigned short var_14 = (unsigned short)29423;
long long int var_15 = -1303211053070213666LL;
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
