#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-109;
signed char var_4 = (signed char)75;
long long int var_8 = -2030312250882558686LL;
long long int var_9 = -3636955679871699661LL;
long long int var_12 = 5312318358274953426LL;
int zero = 0;
long long int var_13 = -4786080697244646895LL;
long long int var_14 = -7735184877177378249LL;
signed char var_15 = (signed char)-54;
void init() {
}

void checksum() {
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
