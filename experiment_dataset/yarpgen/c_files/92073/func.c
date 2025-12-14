/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92073
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1] [(short)12] [i_2 + 1] [i_1]))))) % (((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [6ULL] [i_1] [6ULL] [i_2])) : (arr_5 [i_1] [i_1] [i_2] [5U]))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((arr_3 [i_1] [i_1] [(unsigned char)15]), (((/* implicit */unsigned int) (short)0)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((-(((-325598650) - (((/* implicit */int) var_18)))))) & (((/* implicit */int) var_14)))))));
}
