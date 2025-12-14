#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3439371235107218896ULL;
unsigned long long int var_2 = 16015256690640108734ULL;
unsigned short var_6 = (unsigned short)33657;
unsigned short var_7 = (unsigned short)57841;
int var_8 = -2040626866;
unsigned long long int var_9 = 6720916729361734595ULL;
int zero = 0;
int var_10 = 505072056;
unsigned short var_11 = (unsigned short)40612;
long long int var_12 = 3744755793887977506LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
