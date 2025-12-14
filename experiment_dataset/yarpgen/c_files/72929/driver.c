#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4769842554992092711ULL;
unsigned long long int var_3 = 6212619499700259597ULL;
unsigned char var_5 = (unsigned char)104;
unsigned long long int var_7 = 6826609940900192524ULL;
unsigned char var_9 = (unsigned char)168;
unsigned long long int var_13 = 15090407446558931590ULL;
unsigned long long int var_16 = 17759117883105359574ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)193;
unsigned int var_19 = 20149149U;
unsigned char var_20 = (unsigned char)53;
unsigned char var_21 = (unsigned char)161;
unsigned long long int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 11954482826915605599ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
