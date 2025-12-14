/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61925
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_3)) / (((/* implicit */int) (short)7464))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)7484))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) << (((((((/* implicit */_Bool) 382037532)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7484))) : (683410543U))) - (4294959781U)))))), (3611556743U))))));
                    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_2 [i_0]))))));
                }
            } 
        } 
    } 
}
