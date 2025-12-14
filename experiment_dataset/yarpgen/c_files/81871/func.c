/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81871
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */unsigned char) 2136444285U);
                var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31579)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1]))))));
                arr_5 [i_0] [4U] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))), (((((/* implicit */int) (signed char)-122)) & (((/* implicit */int) arr_2 [i_1 + 2]))))));
                var_22 = ((/* implicit */unsigned int) arr_4 [i_0]);
                var_23 = ((/* implicit */long long int) arr_0 [i_0] [(signed char)14]);
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_5))));
    var_25 = ((/* implicit */unsigned char) var_15);
}
