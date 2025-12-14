/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78677
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (var_8)));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)19652)) ? (16400655767760370873ULL) : (((/* implicit */unsigned long long int) 4807449088571587750LL)))) : (min((var_11), (((/* implicit */unsigned long long int) var_8))))))));
                                var_14 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (var_7) : (arr_9 [i_0])))));
                                var_15 *= ((/* implicit */signed char) arr_8 [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (+(max((var_4), (arr_15 [i_6] [i_1] [i_2])))));
                                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_1] [i_0] [i_5] [i_6] [i_6]))) ? (var_1) : (var_8)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_23 [i_7] = ((long long int) ((signed char) (+(16400655767760370880ULL))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((((/* implicit */_Bool) (short)32765)) ? (var_11) : (((/* implicit */unsigned long long int) -51179511)))))))));
        arr_24 [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((((/* implicit */_Bool) var_7)) ? (min((var_7), (var_5))) : (max((var_8), (((/* implicit */long long int) var_0)))))) : (min((((((/* implicit */_Bool) var_2)) ? (var_12) : (var_5))), (arr_22 [i_7])))));
        arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 543082620)) ? (((((/* implicit */_Bool) -449601973)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (short)-26659)))) : (5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (var_5) : (var_8)))))) : (min((arr_21 [i_7] [i_7]), (arr_21 [i_7] [i_7])))));
    }
}
