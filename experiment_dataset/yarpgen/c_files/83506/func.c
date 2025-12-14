/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83506
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) var_8))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) ((unsigned short) (signed char)-1))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)7936))))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) var_12)) : ((+(4294967295U)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (min((var_14), (((/* implicit */signed char) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            {
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) <= (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
                arr_11 [i_2] = ((/* implicit */int) var_5);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) var_5);
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_24 [i_6 - 2] [i_6 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_6 - 1] [i_6 - 1])))) : (((arr_24 [i_6 - 1] [i_6 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_4] [i_3] = ((/* implicit */signed char) var_15);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((signed char) (unsigned short)65533)))));
                arr_32 [i_9] = ((/* implicit */int) ((arr_30 [i_8] [i_8] [i_8]) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) - ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))) : (((arr_31 [i_9]) << (((var_12) + (449541734))))))))));
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_36 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1])) : (min((((/* implicit */int) ((((/* implicit */_Bool) 2048)) && (((/* implicit */_Bool) arr_36 [i_8] [2LL] [i_10] [i_10] [i_10]))))), ((~(0)))))));
                            arr_39 [i_8] [i_9] [i_10] [i_11] = ((signed char) (signed char)1);
                            /* LoopSeq 1 */
                            for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                            {
                                arr_44 [i_8] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((var_16) ? (arr_35 [i_8] [i_9] [i_9]) : (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_15))))));
                                var_22 = ((/* implicit */unsigned int) arr_30 [9] [i_9] [i_9]);
                                arr_45 [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_28 [i_10 + 1] [i_8])) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_8] [i_8]))))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) var_7)) : (9223372036854775807LL)))))));
                                arr_46 [(signed char)12] [(signed char)12] [i_10] [(signed char)12] [(signed char)12] = (((-(((/* implicit */int) arr_37 [i_12] [i_12] [i_8] [i_8] [i_10 + 1] [i_8])))) / (((((/* implicit */_Bool) 0)) ? (-1) : (6))));
                            }
                            var_23 = ((/* implicit */signed char) ((var_16) ? (((var_1) ? (arr_33 [i_10 - 1] [i_10 + 1]) : (arr_35 [i_10 + 1] [i_9] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 0U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
