#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10403324806388666458ULL;
signed char var_3 = (signed char)52;
long long int var_4 = 7123188627690775367LL;
long long int var_8 = -7042397207348258115LL;
signed char var_9 = (signed char)-122;
long long int var_12 = 5109639048114433203LL;
unsigned long long int var_13 = 7190968779644975447ULL;
unsigned long long int var_15 = 18021242450924715089ULL;
long long int var_17 = 4098427964476406269LL;
int zero = 0;
long long int var_20 = 4700647031843213608LL;
unsigned long long int var_21 = 4067445143566836649ULL;
unsigned long long int var_22 = 18123412570882350375ULL;
void init() {
}

void checksum() {
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
