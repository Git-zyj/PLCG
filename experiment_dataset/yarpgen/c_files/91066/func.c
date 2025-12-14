/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91066
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
    var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)4095))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8))) : (((((/* implicit */_Bool) var_8)) ? (4722816936977400781ULL) : (var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned char)4] [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) var_0);
                        arr_10 [i_0] [(short)11] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_3])) & (((/* implicit */int) arr_9 [i_1] [i_3]))));
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((int) arr_8 [i_2])) / ((~(536870911)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), ((unsigned char)255)));
}
