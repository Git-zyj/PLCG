/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84207
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (min((((/* implicit */unsigned int) (_Bool)0)), (0U)))))) ? (((/* implicit */long long int) max((var_6), ((+(var_6)))))) : (var_8)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) == (var_8))))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))) : (arr_2 [i_0])));
        var_12 = ((/* implicit */unsigned int) var_2);
        var_13 |= ((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((((var_8) + (5632455659612308938LL))) - (3LL)))));
        var_14 = ((/* implicit */signed char) ((arr_1 [i_0]) ? (max((((/* implicit */long long int) 4294967273U)), (-237810985818347409LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_8 [i_1]))));
                    var_16 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_6 [i_3 + 1]))));
                            arr_18 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5])) ? (var_1) : (((/* implicit */long long int) arr_15 [i_1] [i_2] [i_5 + 1])))), (((/* implicit */long long int) var_0))))) ? (arr_16 [i_1] [i_2] [i_3] [i_4] [i_5]) : (4294967268U)));
                        }
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (2U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [8LL] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) : (((((/* implicit */_Bool) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) (unsigned char)86)) ? (var_1) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])))))));
                    }
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976710655ULL)) ? (arr_7 [i_3]) : (16776960U)))) && (((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 1] [i_3] [i_6] [i_3 - 1])))), (arr_17 [(unsigned char)13] [i_1] [i_2] [i_3] [i_3 - 1] [i_6] [i_6])));
                        arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) > (-4845403030592715027LL)));
                        arr_22 [i_6] [i_3 - 1] [i_2] [i_2] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_2])) ^ (((/* implicit */int) arr_11 [i_1] [i_2] [i_3 + 1]))))), (74070302555117712ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26447))) : (0U)))) : ((+(12901446509789490301ULL)))))));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) (-(2852219956U)))) ? (((/* implicit */long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3 - 1])) ? (arr_13 [(_Bool)1] [i_2] [i_2] [i_2] [i_1] [i_1]) : (((/* implicit */long long int) arr_7 [i_3])))))))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -237810985818347409LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (12901446509789490298ULL) : (((/* implicit */unsigned long long int) arr_15 [i_3] [i_2] [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (arr_8 [i_3 + 1]) : (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) var_4))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_1] [i_2] [i_7] = ((/* implicit */unsigned char) 18372673771154433894ULL);
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_1])))) + ((((_Bool)1) ? ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                }
                arr_27 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (arr_7 [14ULL]))) : (((3348086170U) / (1459452863U)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((18446462598732840935ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151)))));
    /* LoopSeq 2 */
    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_15 [i_8 + 1] [7LL] [7LL])) ? (((/* implicit */long long int) arr_15 [i_8 + 1] [i_8] [i_8])) : (var_8)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_41 [i_8 + 1] [i_10] [20LL] [i_11] |= var_9;
                        var_25 = 2796652329U;
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_20 [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 1] [(_Bool)1])))) ? ((~(arr_30 [i_8 + 2] [i_8 + 1]))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (74070302555117753ULL))), (((/* implicit */unsigned long long int) arr_19 [i_8 - 1] [i_9] [i_9] [19U] [i_9]))))));
                        arr_42 [i_9] [i_11] = ((/* implicit */unsigned int) ((_Bool) arr_14 [i_8 - 2] [i_8 - 2] [i_9] [i_10] [i_11]));
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9090463804395726347LL)) && (((/* implicit */_Bool) (short)-32761))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_28 *= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_9 [i_8 - 2] [i_8 - 2])))), (((/* implicit */int) arr_9 [i_8 - 2] [i_8 + 1]))));
                            arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), ((((_Bool)1) ? (arr_10 [i_8 + 2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                            arr_50 [i_8 - 1] [i_9] [i_10] [i_12] [i_9] = ((/* implicit */short) arr_17 [i_8 - 1] [i_8] [i_8 - 1] [i_8 + 1] [18U] [i_8 - 2] [i_8 + 2]);
                        }
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_51 [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_19 [i_8] [i_9] [i_10] [10U] [i_8 - 2]), (3229693141U))))));
                    }
                    for (unsigned int i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        arr_54 [i_8] [i_9] [i_14] = ((/* implicit */long long int) arr_34 [i_8] [i_9] [i_9]);
                        arr_55 [i_8] [i_8] [i_8] [i_14] |= ((/* implicit */signed char) (((-(((/* implicit */int) var_7)))) + (((/* implicit */int) max((arr_14 [i_8 + 2] [i_9] [i_10] [i_14] [i_8 + 2]), (((/* implicit */signed char) (_Bool)1)))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (signed char)112))));
                    }
                }
            } 
        } 
        arr_56 [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2796652329U)))) ? (((((/* implicit */_Bool) arr_5 [i_8 + 2] [i_8 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_8 - 2] [i_8 + 1])))) : (((((/* implicit */_Bool) arr_5 [i_8 + 2] [i_8 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_8 - 2] [i_8 + 1]))))));
        var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)11))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8 + 2])))))));
        arr_57 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_23 [i_8] [i_8 + 2])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned char) (_Bool)1))))), (var_3))))));
        var_32 = ((/* implicit */unsigned int) min((var_32), ((-(268435455U)))));
    }
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        var_33 *= ((/* implicit */unsigned long long int) arr_11 [i_15] [i_15] [i_15]);
        arr_61 [5U] [5U] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_5 [i_15] [i_15])), (var_3))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_15] [i_15] [i_15])))));
    }
}
