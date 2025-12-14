/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80536
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
    var_19 &= var_18;
    var_20 = ((/* implicit */long long int) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [(short)3] [i_1] [i_2])), (arr_1 [i_0] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_1])))) & (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_2]), (arr_0 [i_1]))))))))))));
                }
            } 
        } 
    } 
}
