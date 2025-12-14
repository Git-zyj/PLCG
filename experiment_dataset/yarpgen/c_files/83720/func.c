/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83720
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [13] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) ^ (((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (235581078)))));
                arr_6 [i_0] = ((((/* implicit */_Bool) (unsigned short)18099)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)4092)));
                var_18 = max((((/* implicit */int) ((((/* implicit */int) (unsigned short)25450)) > (((/* implicit */int) (unsigned short)23405))))), (((var_17) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1])))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25450)))) < (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_0))))) ? (((arr_4 [i_0] [i_1]) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_2))));
    var_22 = ((/* implicit */unsigned short) var_11);
}
