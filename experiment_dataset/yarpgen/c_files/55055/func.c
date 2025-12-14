/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55055
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
    var_15 = ((/* implicit */unsigned short) min((2093225896), (-506860117)));
    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) var_11))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 7; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]);
                                arr_15 [i_0] [i_1] [6ULL] [i_3] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) (short)3182);
                            }
                            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                            {
                                arr_18 [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (-((-(-913256645)))));
                                var_18 = ((/* implicit */unsigned long long int) max(((~((-(((/* implicit */int) var_10)))))), (max((arr_11 [i_0 + 2] [i_1 + 1] [i_2] [i_0 + 2] [i_0 + 2]), (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_1 - 2] [i_1] [i_1 + 1]))))));
                            }
                            arr_19 [i_3] [i_3] [i_3] &= ((/* implicit */signed char) (~(max((arr_7 [i_0 + 3] [i_0 - 1] [i_1 - 2]), (((/* implicit */unsigned int) var_1))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */long long int) max(((~(arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_0 + 2] [i_0 + 3]))), (((/* implicit */int) ((unsigned short) arr_11 [i_1 + 1] [i_0 - 2] [i_1 - 2] [i_0 - 2] [i_0 + 3])))));
            }
        } 
    } 
    var_20 &= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (913256645)))) ? (max((var_4), (((/* implicit */unsigned int) var_13)))) : (var_4))), (((/* implicit */unsigned int) var_9))));
    var_21 = ((/* implicit */signed char) var_3);
}
