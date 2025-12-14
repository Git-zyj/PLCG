/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60899
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_16)) * (min((((((/* implicit */_Bool) 4261148013U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (unsigned char)255))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)15])), (((unsigned long long int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_20 |= ((/* implicit */unsigned short) var_3);
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-35))))))))));
            arr_5 [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (unsigned char)224)))))), (max((((/* implicit */unsigned long long int) (unsigned char)255)), (6733915473749374387ULL)))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) * (((arr_2 [i_0]) ? (((/* implicit */int) arr_0 [i_2] [i_0])) : (((/* implicit */int) var_14))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_4 [i_0]), (((/* implicit */short) var_14))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) max((arr_12 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_12 [i_0]))));
            var_23 += arr_2 [i_0];
        }
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_24 *= max((arr_1 [i_4]), (var_5));
        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_4 - 1] [i_4 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_4] [i_4 - 1] [(unsigned char)10])) : (((/* implicit */int) var_8))))))));
        var_26 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_4]))));
        var_27 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_14))))));
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1])) | (((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 1]))))) ? ((-(((/* implicit */int) (signed char)80)))) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_5 + 1]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    var_28 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_23 [i_6 + 2] [4ULL]))))));
                    var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_6 [i_5 + 1] [i_5] [i_6 - 1])))));
                }
            } 
        } 
        var_30 &= (signed char)4;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
                {
                    {
                        arr_35 [i_5] [(short)13] [i_5] [i_10 - 2] = ((/* implicit */signed char) ((6733915473749374364ULL) >> (((((/* implicit */int) (signed char)-38)) + (44)))));
                        arr_36 [i_5] [i_5] [i_5] [2U] = ((/* implicit */short) arr_32 [i_5 + 1] [i_5] [i_9] [i_5 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 4; i_11 < 16; i_11 += 4) 
                        {
                            arr_40 [i_5] = ((signed char) ((unsigned char) 268369920U));
                            var_31 *= ((/* implicit */signed char) arr_8 [i_5] [i_5 + 1] [i_5 - 1]);
                            var_32 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) arr_1 [i_10]))))) | (((/* implicit */int) min((((/* implicit */short) (unsigned char)1)), ((short)-9246)))))), (((/* implicit */int) (unsigned char)233))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 16; i_12 += 1) 
                        {
                            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9]))) != (arr_7 [i_5] [i_5])))), (max((var_5), (((/* implicit */unsigned char) (_Bool)1)))))))) & (((((3874227375U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_12] [i_10] [i_10] [i_8])))))) : (((6733915473749374387ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8])))))))));
                            var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (766120490U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_5] [i_5] [i_9] [i_5] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-7477))));
                            arr_47 [i_5 + 1] [i_5] = ((/* implicit */long long int) min((5328610110839990747ULL), (((/* implicit */unsigned long long int) (unsigned short)22))));
                            arr_48 [i_5 + 1] [i_13] [i_5] = ((/* implicit */signed char) (((+(1587405193U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (unsigned char)97)))))))));
                            arr_49 [i_5] = ((/* implicit */signed char) arr_1 [i_5]);
                            var_35 = ((/* implicit */_Bool) var_0);
                        }
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((unsigned int) ((signed char) arr_44 [i_8] [i_8] [i_9] [i_8] [i_10 - 1]))))));
                    }
                } 
            } 
        } 
    }
    var_37 |= ((/* implicit */short) var_16);
}
