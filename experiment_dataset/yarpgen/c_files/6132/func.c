/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6132
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 196399968U)) && (((/* implicit */_Bool) 1117257735U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 = ((unsigned int) 3585904535U);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_22 = ((unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_18))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))))));
                    var_23 = ((max((arr_0 [i_0]), (var_7))) * (((unsigned int) var_5)));
                }
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    var_24 = ((unsigned int) var_12);
                    var_25 = var_10;
                }
            }
        } 
    } 
    var_26 = var_0;
}
