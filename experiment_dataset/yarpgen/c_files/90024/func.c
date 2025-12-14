/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90024
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
    var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [10LL] [i_1] [i_1]))))))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_2 [i_0] [(short)1] [(short)2]))));
                var_19 += ((/* implicit */short) (((!(((((/* implicit */_Bool) (short)-1)) && ((_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((arr_0 [i_0]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                var_20 = ((_Bool) arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((((arr_0 [i_0]) ? ((+(4294967281U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_2])))));
                                arr_15 [i_2] [i_3] [(unsigned short)12] [(_Bool)1] [i_1] [i_2] |= ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((arr_11 [i_0]) >= (((/* implicit */long long int) 4294967281U))))) : (((((_Bool) arr_8 [i_1] [i_2] [i_3] [i_2])) ? (((int) arr_8 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) (short)1)))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) arr_13 [i_1] [(unsigned short)1] [i_1] [(unsigned short)1] [i_1] [i_1])))))))) ? (((((((/* implicit */_Bool) (short)-1)) ? (arr_10 [i_0] [(_Bool)1] [i_1] [(short)12] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_1]))))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [(signed char)13] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [6] [6] [i_2] [i_3] [i_4])))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (short)-18))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
