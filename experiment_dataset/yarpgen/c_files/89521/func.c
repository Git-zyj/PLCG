/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89521
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
    var_16 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) != (min((((/* implicit */unsigned long long int) var_5)), (var_2))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = max((((/* implicit */int) (unsigned char)143)), (((((/* implicit */_Bool) arr_0 [i_1 + 4])) ? (arr_0 [i_2]) : (var_8))));
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 4] [i_0] [i_1 + 3])) ^ (((/* implicit */int) arr_2 [i_1 + 4] [i_0] [(unsigned short)13]))))) ? (((/* implicit */int) max((arr_2 [i_1 + 4] [i_0] [i_0]), (((/* implicit */unsigned short) var_4))))) : (((((/* implicit */_Bool) arr_2 [i_1 + 4] [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 + 4] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1 + 4] [i_0] [(unsigned short)12]))))));
                }
            } 
        } 
    } 
}
