#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1845830973158928156LL;
long long int var_1 = 90622980649968889LL;
long long int var_2 = -1438355019325318138LL;
long long int var_3 = -5400903852261284286LL;
long long int var_5 = 2271526070009623684LL;
long long int var_6 = -4924320405453368526LL;
long long int var_7 = 9223083600650692094LL;
long long int var_8 = -128688088117897879LL;
long long int var_9 = 7686093188592881858LL;
long long int var_10 = 1353489294625056050LL;
long long int var_11 = 4465289291312665279LL;
long long int var_12 = 2500063023430362767LL;
long long int var_14 = 4331120315143620427LL;
long long int var_15 = 6326367445790430979LL;
long long int var_16 = 5775822249715236236LL;
int zero = 0;
long long int var_18 = 766250360438207229LL;
long long int var_19 = 5270157020019646752LL;
long long int var_20 = 6550162558125689729LL;
long long int var_21 = 2040524921388175729LL;
long long int var_22 = 7292290562345953027LL;
long long int var_23 = 2530626359557643139LL;
long long int var_24 = 4300704029978752231LL;
long long int var_25 = 7767962866276778540LL;
long long int var_26 = -6907921320114336890LL;
long long int var_27 = -3573475532293549633LL;
long long int var_28 = -6184275935199825513LL;
long long int var_29 = -2786077042576843516LL;
long long int var_30 = -7526506535465459587LL;
long long int var_31 = -622478145610113648LL;
long long int var_32 = 9191093270507286559LL;
long long int var_33 = -1834164898483496561LL;
long long int var_34 = -2383573895960233833LL;
long long int arr_2 [21] [21] ;
long long int arr_9 [21] [21] [21] [21] ;
long long int arr_18 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_25 [21] ;
long long int arr_26 [24] ;
long long int arr_27 [24] ;
long long int arr_29 [24] [24] ;
long long int arr_30 [24] [24] [24] ;
long long int arr_32 [24] [24] [24] [24] [24] ;
long long int arr_39 [16] [16] [16] ;
long long int arr_14 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_35 [24] ;
long long int arr_50 [16] ;
long long int arr_55 [16] [16] [16] [16] ;
long long int arr_61 [16] [16] [16] ;
long long int arr_62 [16] ;
long long int arr_63 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 6223983918208528391LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -2244205105095845854LL : 4212849546929760684LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 5111323665483991396LL : 6926625846862906334LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = 1553184984204624507LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = -7428224627137551806LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = -7592277461192066050LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = 4681426099418033620LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 8621187699906442123LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 776131520423746676LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 5244536372366927351LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -1010285241643188795LL : -2226969676220200181LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 4371651184646939860LL : 4974745436185750476LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? 5673612111360924769LL : -9120427306135643093LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -5333490162272818783LL : 5653617483433002518LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = 1553678931129250017LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_62 [i_0] = 70226577400519414LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = 6611558220570422608LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_61 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_63 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
