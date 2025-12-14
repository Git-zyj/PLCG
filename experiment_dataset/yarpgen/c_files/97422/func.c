/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97422
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1))))) : (733499306U)))) ? ((+(((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_14))));
    var_21 = var_0;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((((/* implicit */int) var_6)) < (arr_0 [i_1]))))))));
                    var_23 = (!((_Bool)1));
                }
            } 
        } 
    } 
}
