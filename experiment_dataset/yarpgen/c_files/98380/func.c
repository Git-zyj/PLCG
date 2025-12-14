/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98380
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (((+(8760369683167953430ULL))) < (((/* implicit */unsigned long long int) (-(((int) arr_1 [i_0 - 1] [i_0])))))));
        var_20 = ((/* implicit */int) ((((((281474842492928ULL) - (arr_0 [i_0 - 3]))) ^ (((((/* implicit */_Bool) -1204601509)) ? (11656515653343659404ULL) : (((/* implicit */unsigned long long int) 1375353115)))))) <= (((((/* implicit */unsigned long long int) 131071)) ^ (var_18)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-(-461605910)));
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [6ULL])) || (((/* implicit */_Bool) var_11))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) && (((/* implicit */_Bool) arr_6 [i_2]))));
        var_24 ^= ((/* implicit */unsigned long long int) arr_6 [i_2]);
        var_25 = arr_7 [i_2];
        arr_8 [i_2] = ((/* implicit */int) (~(arr_7 [i_2])));
        var_26 = (-(var_15));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (~(var_17)))), (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) var_12)) : (15689787416584063490ULL))))) != (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (var_8) : (var_10))))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -131065)) ? (0ULL) : (((/* implicit */unsigned long long int) var_15))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 134217720)) ? (var_7) : (var_16))))))))))));
        var_29 = ((unsigned long long int) min((((/* implicit */unsigned long long int) min((-607063166), (arr_10 [i_3] [i_3])))), (((arr_0 [i_3]) / (4765674841785027367ULL)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 18446744073709551615ULL)))));
                    var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_12)) <= (13681069231924524276ULL)));
                    var_32 = ((/* implicit */int) ((unsigned long long int) ((((-1648581965) + (2147483647))) >> (((var_18) - (17946017872944942258ULL))))));
                    var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12ULL)) ? (arr_11 [i_3] [i_3]) : ((+(((/* implicit */int) ((1731774138) == (arr_2 [i_4] [i_4]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 7; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((((13681069231924524234ULL) | (6652517949236797417ULL))) <= (((/* implicit */unsigned long long int) -1))));
                                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) -131065)) ? (13681069231924524255ULL) : (((/* implicit */unsigned long long int) 1375353115))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_36 = (+(min((var_1), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_5))))))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                {
                    var_37 = min((((((/* implicit */_Bool) 7124380992227300136ULL)) ? (6356087858106764641ULL) : (((/* implicit */unsigned long long int) arr_22 [i_8])))), (((/* implicit */unsigned long long int) ((((18446744073709551615ULL) << (((393808622) - (393808561))))) <= (((unsigned long long int) 6652517949236797431ULL))))));
                    arr_27 [i_9] [i_9] = (+((~(arr_22 [i_8]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (int i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */int) arr_21 [i_8]);
                                var_39 = ((/* implicit */int) min((var_39), (arr_26 [i_8])));
                                arr_32 [i_12] [i_12] [i_8] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((-409994840) >= (1144688771)));
                                var_40 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 3959585268437839708ULL)) ? (((((/* implicit */_Bool) arr_24 [i_12])) ? (4718085501815946535ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) min((var_16), (1008163868)))))));
                                arr_33 [i_12 - 1] [i_8] [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) -1204601514)) ? (8225664) : (134217720));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_41 = var_2;
    var_42 = ((/* implicit */unsigned long long int) ((int) var_11));
}
