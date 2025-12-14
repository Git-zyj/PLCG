#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
long long int var_2 = 5427902080259049036LL;
long long int var_5 = 4047372804965568494LL;
signed char var_6 = (signed char)-96;
long long int var_10 = 5836809507678440688LL;
long long int var_16 = 1297216639050960830LL;
int zero = 0;
unsigned long long int var_18 = 12526091154954154627ULL;
signed char var_19 = (signed char)-95;
long long int var_20 = 5440217104319917677LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
