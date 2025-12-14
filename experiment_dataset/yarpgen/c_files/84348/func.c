/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84348
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 991106820U)) ? (3010408114U) : (((/* implicit */unsigned int) arr_0 [i_0 + 1]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (-2147483647 - 1))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 3] [i_2 + 4])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            arr_14 [i_4 - 1] [i_1] [17U] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)62868))));
                            var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 991106813U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12035523607131933130ULL)))) ? (3202566990U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)7] [(unsigned short)7] [i_2])))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    arr_26 [i_7] = ((/* implicit */unsigned int) arr_4 [i_6 + 3] [i_6 + 2] [i_6 - 1]);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_33 [i_5] [i_6] [i_6] [i_8] &= ((/* implicit */signed char) ((arr_10 [i_6 - 1] [i_6] [i_6 + 3]) ? (arr_29 [i_6] [i_6] [i_6 + 3] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_6 + 3])))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)10732)))))));
                                var_16 |= ((/* implicit */int) ((((_Bool) arr_16 [i_6] [i_8])) ? (((((/* implicit */_Bool) arr_1 [15])) ? (((/* implicit */unsigned int) var_3)) : (arr_29 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_5] [i_6] [i_7] [i_7] [i_5])) ? (-467087504) : (((/* implicit */int) arr_13 [i_5] [i_6] [i_5] [i_6] [i_6] [i_6 + 3] [i_6 + 1])))))));
                                arr_34 [i_5] [i_6 + 1] [9ULL] [i_5] [i_9] [i_5] = ((/* implicit */_Bool) (~(arr_5 [i_6 + 1] [(unsigned short)14] [i_7])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [i_5] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)35));
        /* LoopSeq 2 */
        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [i_10 + 1])) ? (-467087494) : (((((/* implicit */_Bool) (unsigned short)26811)) ? (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_23 [i_5]))))));
            arr_38 [i_5] [i_5] [(unsigned char)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_10 + 1])) ? (arr_3 [i_5]) : (9223372036854775807LL)));
            arr_39 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_29 [i_5] [i_10] [i_5] [i_5]);
        }
        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_43 [i_5] [i_5] [i_11] = ((/* implicit */unsigned short) 9223372036854775807LL);
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22538)) ? (((/* implicit */int) arr_6 [13] [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_11] [i_5])))))));
        }
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((int) (unsigned short)8556)))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) (short)23821)))));
                    arr_49 [i_5] [i_13] [i_13] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_5] [0] [15U])) ? (arr_31 [i_5] [i_12] [i_12] [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [i_12]))))));
                }
            } 
        } 
        var_21 *= ((/* implicit */_Bool) (unsigned short)62866);
    }
    var_22 = ((/* implicit */unsigned short) var_7);
}
