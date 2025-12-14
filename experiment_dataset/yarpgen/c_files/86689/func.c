/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86689
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (9223372036854775807LL))) >> (((var_0) + (1641397520))))))));
    var_17 = ((/* implicit */long long int) ((-2533887473607335394LL) <= (((/* implicit */long long int) ((var_10) & (((int) var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_0]))))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2533887473607335386LL)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */long long int) max((((unsigned long long int) -2533887473607335394LL)), (((unsigned long long int) (signed char)-20))));
                                arr_13 [i_0] [(unsigned char)4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)1984)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0] [0ULL])))) + (((arr_5 [i_3] [i_3] [i_0]) ^ (arr_1 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : (3LL))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_5]) < (((/* implicit */int) var_3)))))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5]))));
        var_19 *= ((/* implicit */unsigned char) (((-(var_0))) - (arr_14 [i_5])));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 4; i_7 < 16; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_26 [(short)6] [i_6] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_8] [(unsigned short)14] [i_8] [i_8 - 1]))) & (((unsigned long long int) arr_20 [(signed char)11] [i_6] [i_6])));
                        var_20 *= ((/* implicit */signed char) ((short) arr_19 [i_7] [i_7 + 1] [i_8 - 1]));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_19 [i_5] [i_6] [i_6]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((arr_29 [i_10] [i_5] [i_7] [i_7] [i_5] [i_5]) + (9223372036854775807LL))) >> (((arr_28 [i_5] [i_6] [i_6]) - (1207808391433954655LL))))))));
                                arr_31 [i_5] [i_6] [12ULL] [i_9] [i_7] &= ((/* implicit */signed char) (~(-1)));
                            }
                        } 
                    } 
                    arr_32 [i_5] [i_6] [i_6] [i_7 - 3] = ((/* implicit */long long int) var_1);
                    arr_33 [i_5] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (short)1984)))));
                    arr_34 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) != (arr_14 [i_6])));
                }
            } 
        } 
    }
}
