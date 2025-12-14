#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -786023207;
long long int var_4 = -6976396143405752739LL;
long long int var_6 = 2799862104209003588LL;
unsigned long long int var_7 = 8081992579964791082ULL;
unsigned char var_9 = (unsigned char)103;
long long int var_10 = -3521227268059097917LL;
int zero = 0;
int var_11 = -1194909055;
unsigned int var_12 = 164991347U;
short var_13 = (short)9800;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
