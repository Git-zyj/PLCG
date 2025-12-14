/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93503
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
    var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) var_2)) - (106)))))) ? ((-(var_5))) : (max((((((/* implicit */_Bool) var_1)) ? (121248021) : (var_0))), ((-(var_7)))))));
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (max((var_4), (((/* implicit */unsigned int) var_0))))))), (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(2953757292U))))));
                var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_5 [i_1 - 4])))));
                var_14 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_2 [i_0])) + (arr_3 [i_0] [i_1 - 1])));
            }
        } 
    } 
    var_15 |= ((/* implicit */_Bool) ((unsigned char) var_1));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((unsigned long long int) ((arr_3 [i_2] [i_2]) - (((/* implicit */unsigned long long int) var_0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_1))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_7 = 3; i_7 < 8; i_7 += 2) 
                        {
                            var_18 |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_15 [6U] [i_4] [i_5])) <= (var_1))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (var_6))) : (((/* implicit */long long int) var_5))));
                            var_19 = ((/* implicit */unsigned short) ((signed char) ((((var_7) + (2147483647))) << (((var_5) - (180853579))))));
                        }
                        for (short i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            var_20 *= ((/* implicit */signed char) max((((long long int) arr_5 [i_5])), (((/* implicit */long long int) (~(var_4))))));
                            var_21 = ((unsigned short) max((121248021), (((/* implicit */int) arr_21 [i_3] [(_Bool)1] [i_5] [i_5 + 1] [i_8 + 1]))));
                            var_22 = ((((/* implicit */_Bool) -121248021)) && (arr_22 [i_6] [i_6] [i_5]));
                            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(signed char)0])) * (((int) arr_22 [i_5] [i_6] [i_8]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-20)) : (121248021))) / (var_7)))) * (arr_12 [i_5] [(unsigned short)8] [i_3])));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) max(((~(arr_3 [i_3] [i_5 + 1]))), (((/* implicit */unsigned long long int) var_4))));
                            arr_28 [i_3] [i_4] [i_5 + 1] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_6] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (arr_11 [i_3]))))) : (var_3))) : (((/* implicit */unsigned int) ((int) max((var_4), (((/* implicit */unsigned int) var_7))))))));
                            var_26 = ((/* implicit */unsigned short) max(((-(arr_19 [i_6] [i_4] [i_5] [6U]))), (((/* implicit */unsigned long long int) -1854318180))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 1; i_10 < 8; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) arr_7 [i_4]);
                            var_28 ^= ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6] [(unsigned short)4])) ? (var_5) : (arr_26 [i_10] [i_10] [i_10] [i_10] [(unsigned char)2]));
                            var_29 = ((((/* implicit */_Bool) 2354032445417220509ULL)) && (((/* implicit */_Bool) 4049103685U)));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_5))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (arr_12 [7LL] [i_5] [i_5 + 2])));
                            var_32 = ((/* implicit */unsigned char) arr_15 [i_5] [i_5 + 1] [i_5 - 1]);
                            arr_33 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) arr_23 [i_4]);
                            var_33 = ((/* implicit */_Bool) ((unsigned char) var_3));
                        }
                        for (short i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) (~((-2147483647 - 1))));
                            var_35 *= ((/* implicit */int) ((_Bool) (+(max((((/* implicit */unsigned long long int) var_0)), (2354032445417220509ULL))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_13 = 2; i_13 < 7; i_13 += 2) 
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((unsigned long long int) var_7)))));
                        var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_13] [i_5 + 2]))));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */short) ((var_1) != (((/* implicit */unsigned long long int) var_0))));
                            var_40 = ((/* implicit */int) arr_0 [i_3]);
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (2147483647)));
                            var_42 = ((/* implicit */unsigned long long int) ((short) arr_41 [i_5 - 1] [i_13] [i_13] [i_15] [i_4] [i_15] [i_15]));
                        }
                        for (short i_16 = 3; i_16 < 9; i_16 += 4) 
                        {
                            var_43 = ((arr_8 [i_5 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))));
                            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) arr_46 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13] [i_13] [i_13]))));
                        }
                        var_45 = ((/* implicit */short) arr_29 [i_4] [i_13] [i_4] [i_4] [i_13] [i_5]);
                    }
                    var_46 -= ((unsigned char) ((((_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [i_5 - 1] [i_4] [i_4] [i_4] [i_4] [i_3]))))) : (((arr_4 [i_4] [i_5 + 1]) | (var_8)))));
                    var_47 = ((/* implicit */long long int) var_2);
                    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((unsigned char) ((arr_45 [7ULL] [i_5 - 1] [i_5 - 1]) != (((/* implicit */int) arr_24 [(unsigned char)8] [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1]))))))));
                    var_49 = ((/* implicit */unsigned long long int) ((short) var_4));
                }
            } 
        } 
        var_50 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3])) || (((/* implicit */_Bool) var_8))))), (arr_23 [i_3])));
        arr_47 [i_3] = ((/* implicit */unsigned int) max((2147483647), ((+(((/* implicit */int) arr_22 [i_3] [(signed char)7] [i_3]))))));
    }
}
