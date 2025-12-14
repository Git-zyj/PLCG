#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)84;
unsigned char var_6 = (unsigned char)230;
unsigned long long int var_8 = 3771085208015691792ULL;
signed char var_9 = (signed char)-122;
long long int var_10 = -3821197891243807340LL;
unsigned short var_11 = (unsigned short)27561;
unsigned long long int var_12 = 3354010891054526567ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)11786;
unsigned long long int var_16 = 15346225461663033182ULL;
unsigned long long int var_17 = 2961134831881193172ULL;
unsigned char var_18 = (unsigned char)112;
long long int var_19 = -692598933720242774LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
