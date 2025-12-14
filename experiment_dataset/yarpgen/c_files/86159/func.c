/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86159
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
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23248)) ? (-6433021935030211944LL) : ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1]))) : (arr_6 [i_0] [i_1])));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                        arr_12 [i_3] [i_2] [i_1] |= ((arr_8 [i_0 - 1]) << (((arr_5 [i_3]) - (1716653401098077323ULL))));
                        arr_13 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (arr_4 [i_0] [(_Bool)1]) : (((long long int) arr_1 [i_1] [i_1]))));
                    }
                    for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32748))))) ? (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4]) >> (((arr_4 [i_1] [i_4]) - (2414126083586367688LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)112)) / (-1143851403))))));
                            var_20 = arr_10 [i_0] [i_0] [i_1] [3LL] [i_4] [(unsigned short)9];
                            arr_18 [i_0] [i_0 + 1] [i_1] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) arr_11 [i_5 + 2] [i_0 - 1]);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
                            var_22 = ((/* implicit */long long int) (+(arr_14 [i_0 + 1] [i_1] [i_1] [i_2] [i_4] [i_2])));
                        }
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6] [i_4] [i_4 + 1] [i_1] [i_0 + 1] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_20 [i_4] [i_1] [i_1] [i_2] [i_6] [10LL]))))));
                            arr_22 [i_4] [i_4] = ((/* implicit */signed char) var_12);
                            arr_23 [i_4] [i_0 + 1] [i_2] [i_4] [i_6] [i_2] [i_6] = ((/* implicit */_Bool) (-(arr_8 [i_0 - 1])));
                        }
                        arr_24 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (arr_8 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)112)))));
                        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [(short)10] [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)12])) ? (((/* implicit */int) (short)112)) : (((((/* implicit */int) var_12)) + (((/* implicit */int) arr_0 [i_2] [i_4]))))));
                    }
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [12LL])) && ((!((_Bool)1)))));
                    var_25 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (signed char)124)), (arr_11 [i_8] [i_8])))));
                    arr_35 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)85)) ? (arr_15 [i_7] [i_8] [i_9] [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_9] [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_33 [i_7] [i_8] [i_7] [i_7]))))))))));
                    var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_7] [i_8])) ? (((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] [i_7])) ? (-2582560855481929340LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8334))))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (short)32736))))) : (((/* implicit */int) (unsigned char)179)))))));
                }
            } 
        } 
        var_27 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (arr_11 [i_7] [7ULL]) : (arr_11 [i_7] [i_7]))), (((/* implicit */unsigned long long int) ((short) max((var_0), (arr_27 [i_7])))))));
    }
    for (long long int i_10 = 1; i_10 < 15; i_10 += 2) 
    {
        arr_38 [i_10 + 1] [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((min((2055368758227845057ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) >> (((((/* implicit */int) arr_36 [i_10 + 1] [i_10 + 1])) + (51)))))));
        var_28 = max((((/* implicit */unsigned short) min(((short)101), (((/* implicit */short) arr_36 [i_10 - 1] [i_10 - 1]))))), (((unsigned short) arr_36 [i_10 + 1] [i_10 + 1])));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((max((arr_37 [i_10 - 1]), (arr_37 [i_10 - 1]))), (arr_37 [14LL]))))));
        var_30 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_37 [(unsigned short)0])) ? (arr_37 [i_10 - 1]) : (max((arr_37 [i_10]), (arr_37 [i_10 + 1])))))));
    }
}
