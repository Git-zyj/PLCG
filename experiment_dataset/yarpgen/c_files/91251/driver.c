#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16380653562165115066ULL;
long long int var_8 = -119890936526150998LL;
unsigned long long int var_9 = 7700213453676515414ULL;
int zero = 0;
unsigned long long int var_20 = 3982348322477119297ULL;
unsigned long long int var_21 = 10923796369481306529ULL;
short var_22 = (short)19089;
int var_23 = 816652972;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
