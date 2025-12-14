/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92652
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
    var_16 = ((/* implicit */long long int) min((var_1), (((((/* implicit */_Bool) var_12)) ? (((int) var_1)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_10))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_4 [(signed char)12] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */int) min((-5258339176358541526LL), (((/* implicit */long long int) (_Bool)1))));
                                arr_17 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58625)) ? (((/* implicit */long long int) 12)) : (-8181064300080363597LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4211)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */unsigned long long int) 5258339176358541526LL)) : (11313961210680661423ULL))))))) : (-5));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)12] [(unsigned char)4] [(unsigned short)12])))))) : (min((((/* implicit */unsigned long long int) ((arr_13 [(unsigned short)14] [(unsigned short)4] [(unsigned short)4] [(unsigned short)2]) ? (((/* implicit */int) arr_14 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) (short)4074))))), (6407774673150730647ULL)))));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1)))))) ? (min((247349780844758349LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((int) var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            {
                arr_23 [2ULL] |= ((/* implicit */_Bool) max((arr_9 [18U]), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_21 [i_5] [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */int) (short)-6753)) : (-12))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)32750)), (arr_5 [i_5] [i_5] [i_5])))))))));
                arr_24 [i_5] [i_5] [i_5] = (-(((((/* implicit */_Bool) var_2)) ? (arr_15 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1]) : (arr_15 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
                arr_25 [i_5] [i_5] [i_5] = ((arr_6 [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) != ((-9223372036854775807LL - 1LL)))))));
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 13; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_36 [i_5] [i_5] [i_7] [i_8] [i_8] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (signed char)16)) : (-29))) / (((((/* implicit */_Bool) (short)-9290)) ? (((/* implicit */int) (short)-13378)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_37 [i_5] [i_7] [i_7] = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                    arr_38 [i_5] [i_5] [i_6] [2] = ((/* implicit */short) ((var_5) ? (((/* implicit */int) arr_11 [i_5] [i_5])) : (arr_19 [i_5] [i_5])));
                    var_18 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_34 [12ULL] [i_6] [i_6] [12ULL] [12ULL]))))));
                }
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_19 = var_13;
                    var_20 *= ((/* implicit */unsigned long long int) (~((+(var_11)))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((var_8) && (arr_14 [i_10] [i_10] [15] [i_10] [i_10] [i_10]))))))));
                    arr_42 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_9 [i_5]);
                }
                /* vectorizable */
                for (long long int i_11 = 3; i_11 < 13; i_11 += 1) 
                {
                    arr_45 [i_5] [i_5] = var_11;
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-80))));
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_6] [7LL] [i_6 + 1]))));
                    }
                    for (int i_13 = 2; i_13 < 13; i_13 += 2) 
                    {
                        var_24 &= ((((/* implicit */int) ((unsigned short) var_15))) * (((/* implicit */int) var_5)));
                        /* LoopSeq 2 */
                        for (int i_14 = 2; i_14 < 11; i_14 += 2) 
                        {
                            arr_54 [i_14] [(unsigned short)8] [i_13] [(short)6] [(short)6] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_5] [i_6] [i_6])) << (((/* implicit */int) arr_11 [i_5] [i_5]))))) : (((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            var_25 &= (+(((/* implicit */int) arr_11 [i_5] [i_5])));
                        }
                        for (int i_15 = 2; i_15 < 13; i_15 += 1) 
                        {
                            var_26 = ((/* implicit */int) ((unsigned char) arr_39 [i_15 + 1] [i_6 + 1]));
                            arr_58 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_3);
                        }
                    }
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [9] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (arr_55 [i_6] [i_6 - 1] [(short)12] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (int i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            {
                                arr_67 [i_5] [i_6] [5LL] [5LL] [i_16] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) ? (-5258339176358541526LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5258339176358541539LL)) ? (((/* implicit */int) arr_30 [i_5] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1)))))));
                                var_28 = (!(arr_56 [i_5] [i_5] [i_5] [12LL] [(signed char)6] [i_6 + 1]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
