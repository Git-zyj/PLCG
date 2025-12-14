/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87326
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
    var_20 = ((/* implicit */unsigned short) (_Bool)0);
    var_21 *= ((/* implicit */unsigned short) var_8);
    var_22 = ((/* implicit */_Bool) (unsigned short)59125);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) var_5);
                                var_25 *= ((/* implicit */_Bool) arr_15 [i_1] [(signed char)16]);
                                arr_17 [i_0] [i_1] [i_4] [i_0] [(signed char)10] = ((/* implicit */long long int) var_12);
                                arr_18 [i_0] [(_Bool)1] [i_2 + 1] [i_3] [i_1] = (-(((/* implicit */int) ((signed char) arr_9 [i_1] [i_1 + 1] [i_3] [i_1 + 1] [i_1] [i_4]))));
                                arr_19 [i_1] [i_3] [i_2] [i_1] [i_1] = arr_11 [i_0] [i_0] [i_1];
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 1])) : (min((-990200525), (((/* implicit */int) (unsigned short)6410)))))))))));
                    arr_20 [i_1] [i_0] &= min((max((((/* implicit */long long int) (unsigned short)6410)), (var_18))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (17423044038000302178ULL))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_0] [i_5] [i_5] [i_7] [i_8]))));
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)46)) : (1458840209)));
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_5] [i_7] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)6410)))))));
                            }
                        } 
                    } 
                    var_32 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((1209948539), (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) min((arr_27 [(signed char)9]), (((/* implicit */unsigned short) var_1))))), (((((/* implicit */_Bool) -452212634)) ? (arr_25 [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 2) 
    {
        arr_34 [i_9] &= ((((/* implicit */_Bool) (-(arr_29 [i_9 - 2])))) ? (((((/* implicit */_Bool) arr_31 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (14790937339223306494ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1209948539)) ? (1402525507U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72)))))));
        var_33 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */int) arr_5 [i_9])) : (((/* implicit */int) arr_5 [i_9]))))), (((long long int) max((((/* implicit */unsigned char) arr_32 [i_9])), (arr_4 [i_9] [i_9]))))));
        arr_35 [i_9] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) var_18)), (var_2))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_34 |= ((/* implicit */unsigned char) arr_5 [i_10]);
            arr_38 [i_9] = ((/* implicit */int) arr_36 [i_9 + 1]);
            var_35 = ((/* implicit */unsigned char) arr_27 [i_9 - 2]);
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) var_14))));
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            arr_41 [i_9] [i_9] [i_11] = ((/* implicit */short) (unsigned short)59125);
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        arr_50 [i_9] [i_11] [9ULL] [i_13] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_26 [i_9 - 1])));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [i_9]))));
                        arr_51 [i_14] [i_11] [i_12] [i_11] [i_11] [i_11] [i_9] = ((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_11] [i_13]);
                        arr_52 [i_9] [i_11] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned char)42)), (6611805365360015430ULL))), (((/* implicit */unsigned long long int) arr_2 [i_9]))));
                        var_38 = ((/* implicit */long long int) ((short) (+(-1209948531))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) min((var_18), (((/* implicit */long long int) (unsigned char)71)))))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) arr_9 [i_9] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9] [i_9 + 1]))));
                    }
                    var_41 = ((/* implicit */_Bool) min((min((arr_1 [i_9 - 2]), (((/* implicit */int) var_15)))), (min((arr_1 [i_9 - 2]), (-1604260775)))));
                }
                var_42 = ((/* implicit */unsigned long long int) var_17);
            }
        }
        arr_55 [i_9] [i_9] = var_12;
    }
}
