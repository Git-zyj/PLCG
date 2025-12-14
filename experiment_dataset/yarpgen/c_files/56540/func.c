/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56540
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_3] [i_1] [i_1] [i_3] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_3] [i_1] [i_1 + 1] [i_3] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_1 + 1]))))));
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) var_6);
                        arr_12 [(short)3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3] [i_2] [i_1]))))) == (((var_11) + (((/* implicit */unsigned int) arr_2 [1U] [i_1 + 1] [i_2]))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (unsigned short)1610))));
                            var_18 = ((/* implicit */long long int) (~((+(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_6)))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned char) var_6);
                            var_20 ^= ((((/* implicit */_Bool) max((arr_8 [i_1 + 1]), (arr_8 [i_1 + 1])))) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) (short)2855)) - (2839))))) : (((((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_1)) - (54321)))))) ? (((((/* implicit */_Bool) (short)2855)) ? (var_14) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (short)-2856)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_3] [i_0] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (112U)))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) var_13)) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (short)2855)))), (((/* implicit */int) var_7))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) | (arr_4 [i_0] [i_6] [i_0]))))))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_7 - 1] [i_7 + 1] [i_0] [i_1 + 1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_13))))))));
                        var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_7] [6U] [i_2] [(unsigned short)0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_1] [i_2] [(short)2] [i_2] [i_7 + 1] [(_Bool)1]))) : (var_12)))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 537273460U))))) <= (((/* implicit */int) var_0)))))));
}
