/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5616
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
    var_18 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((var_17) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (max((var_5), (var_5))))), (((/* implicit */unsigned int) var_0))));
    var_19 &= ((/* implicit */long long int) var_7);
    var_20 = ((/* implicit */signed char) var_0);
    var_21 = ((/* implicit */long long int) min((min((var_2), (((((/* implicit */_Bool) (short)24576)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24558))))))), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [3ULL] [5LL] [(signed char)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_5)))) / (var_12))) / (((/* implicit */long long int) ((/* implicit */int) var_13))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [7U] = ((/* implicit */short) var_4);
                            arr_12 [i_3] [i_3] [i_3] [i_3] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(signed char)8] [(signed char)14] [i_2] [i_2]))))) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) var_14))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                            arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) min((var_3), (min((var_9), (arr_8 [i_0 - 2] [i_2 + 1] [i_2] [i_1 + 1])))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [22ULL] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [12U] [i_1] [i_2] [i_2]))) / (var_12)));
                                arr_17 [i_0] [i_4] [i_2] [i_4] [i_4] [i_4] [(signed char)22] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) (short)-24558))), (max((((/* implicit */long long int) var_14)), (var_12)))));
                            }
                            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                            {
                                arr_20 [i_5] [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) max((max(((short)-24558), (((/* implicit */short) (signed char)7)))), (((/* implicit */short) var_6))));
                                arr_21 [i_0] [i_5] [20LL] [i_3 - 2] [i_5] [i_0] = ((/* implicit */signed char) max(((short)24574), (((/* implicit */short) (unsigned char)206))));
                            }
                        }
                    } 
                } 
                arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_0 + 2] [i_1 + 1] [i_1]), (((/* implicit */unsigned int) var_3))))) || (((/* implicit */_Bool) (-(arr_4 [i_0 - 3] [15LL] [i_1]))))));
            }
        } 
    } 
}
