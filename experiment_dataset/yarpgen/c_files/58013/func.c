/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58013
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) - (1412507366U)))));
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) ((unsigned char) ((signed char) (~(var_14)))));
                                var_16 ^= ((/* implicit */_Bool) min((((/* implicit */int) max((arr_9 [i_0 + 1] [i_0 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned char) arr_5 [i_0 - 2] [i_0 - 2] [i_4 + 1] [i_0 - 2]))))), (((arr_5 [i_0 + 1] [i_0] [i_4 - 2] [i_0 + 1]) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_3])) : (((/* implicit */int) var_15))))));
                                var_17 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (arr_8 [i_0] [i_0] [i_2] [i_4 + 2]) : (((/* implicit */int) ((short) (signed char)-35))))), ((-(((/* implicit */int) max((arr_7 [i_3] [i_3] [i_3]), (((/* implicit */short) var_15)))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) var_8);
                arr_13 [i_0] [i_0] [i_1] = max(((unsigned short)0), (((/* implicit */unsigned short) (short)-1)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4235445607301778039ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [(unsigned char)0]))) : (11ULL)))));
                    var_20 += ((/* implicit */short) ((unsigned int) ((unsigned char) var_1)));
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                {
                    arr_28 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_5 - 1] [i_8])) : (((/* implicit */int) arr_0 [i_5 - 2] [i_9 - 1]))));
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [8U] [4ULL] [0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))) % (((/* implicit */int) (!(var_10))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_32 [i_5] [i_5] [i_8] [i_9] [i_9] [i_10] [i_11]))));
                            arr_35 [i_5] [i_8] [i_5] [i_8] [i_11] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)-24199))) != (arr_1 [i_8])))));
                            var_25 = ((/* implicit */int) ((_Bool) arr_17 [i_5 - 2]));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                            var_27 *= ((/* implicit */signed char) 5451615320603870248LL);
                        }
                    }
                    var_28 = ((/* implicit */int) ((15316508750373970018ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4)))));
                    arr_38 [i_8] [(short)0] = ((/* implicit */short) ((unsigned char) (unsigned char)183));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_13 = 2; i_13 < 13; i_13 += 3) 
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_13 + 2])) + (((/* implicit */int) ((unsigned char) var_5)))));
        arr_42 [i_13] = ((/* implicit */unsigned short) var_13);
        arr_43 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_13]))) / (var_5)));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                for (unsigned char i_16 = 4; i_16 < 12; i_16 += 2) 
                {
                    {
                        arr_52 [i_13 + 1] [i_13] [1U] [2ULL] [i_13] [i_13 - 2] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)59588)))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_49 [i_13] [i_16]))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_46 [i_13 + 2] [i_16 - 3])) | (((/* implicit */int) arr_39 [i_13]))));
                    }
                } 
            } 
            arr_53 [i_13] = ((/* implicit */unsigned short) var_12);
        }
        for (int i_17 = 0; i_17 < 15; i_17 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_18 = 2; i_18 < 14; i_18 += 2) 
            {
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_5))));
                arr_58 [i_13] [i_13] [i_13] [(unsigned char)8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-35))));
            }
            arr_59 [i_13] [i_17] = ((/* implicit */unsigned short) (~(((unsigned long long int) 2147483644))));
            var_33 = ((/* implicit */_Bool) max((var_33), ((((~(((/* implicit */int) arr_40 [i_17])))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [14LL]))) < (6769902147660735370LL))))))));
            var_34 = ((short) (signed char)-51);
        }
    }
}
