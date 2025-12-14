/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92474
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))) ? (((/* implicit */long long int) var_6)) : (var_3)))) || (((/* implicit */_Bool) ((unsigned int) (-(var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) 15)) && (var_4))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) min((0U), (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-20616)))) | ((~(((/* implicit */int) var_1)))))))));
                        var_14 += ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [(unsigned char)8] [i_1])), (var_9)))) - (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) var_10)) : (65535ULL))))), ((~((~(18446744073709486081ULL)))))));
                        arr_11 [i_0] [5] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((2720809983599386518LL) / (-2720809983599386518LL)))) * ((-((+(17752455277812086061ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)0)))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_2 + 1] [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -753804740)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)29))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        arr_17 [5U] [i_0] [14ULL] [i_1] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_8 [i_5 + 1] [i_0] [i_5])) : (((((/* implicit */_Bool) (signed char)-1)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_2 [i_0]))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -254474699))));
                            arr_21 [i_0] [i_6] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2958296878U));
                        }
                        arr_22 [i_0] [17LL] [i_1 - 2] [i_0] = ((short) arr_10 [i_0] [i_2 - 1]);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_16 += ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1]))))))), (min((((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_1] [i_1 - 2])), (var_9)))));
                        var_17 += ((/* implicit */unsigned int) min(((~(arr_3 [i_1 - 2] [i_2 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (arr_7 [i_0] [i_0] [i_1 - 1] [i_2 + 1]))))));
                        arr_26 [i_0] [7U] [i_0] [i_7] = ((/* implicit */unsigned int) var_11);
                        arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)5)), (753804725)));
                        arr_28 [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned char) min((((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)24470)), (var_9)))) + (var_0))), (((/* implicit */long long int) min((arr_5 [i_1 - 1] [7LL] [i_2 + 1]), (var_8))))));
                    }
                }
                /* LoopNest 3 */
                for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (int i_10 = 4; i_10 < 17; i_10 += 3) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_16 [i_0] [5LL] [i_8] [i_9]);
                                arr_37 [i_0] [15ULL] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((long long int) min((arr_35 [i_0] [i_1] [i_10 + 2] [i_9] [i_10]), (((/* implicit */long long int) arr_13 [i_1] [i_1 - 1] [i_0] [i_0])))));
                                arr_38 [i_1] [12ULL] [(signed char)6] |= ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned short) ((short) min((((/* implicit */int) arr_34 [i_1 - 1] [i_1 - 1])), (var_10))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((long long int) ((signed char) (unsigned short)0))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (4375318469911348507LL) : (var_3))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))));
}
