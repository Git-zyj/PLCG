#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5516706112124070291ULL;
long long int var_2 = -834241397149488640LL;
short var_3 = (short)-18353;
unsigned long long int var_5 = 13798053780508968444ULL;
int var_6 = 1974201341;
unsigned short var_8 = (unsigned short)1238;
long long int var_9 = -7552339486323842086LL;
int var_10 = 1662848322;
int zero = 0;
unsigned short var_11 = (unsigned short)11755;
long long int var_12 = 8832689273061836785LL;
unsigned long long int var_13 = 12375305155495854028ULL;
unsigned char var_14 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
