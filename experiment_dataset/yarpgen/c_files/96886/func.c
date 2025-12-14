/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96886
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
    var_10 = var_7;
    var_11 = var_4;
    var_12 = var_2;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) 4231181795U)) ? (489338276U) : (117440512U));
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 992573687U)) ? (117440533U) : (1854912930U))))));
                            var_15 -= max((((unsigned int) var_8)), (((var_1) / (arr_10 [i_0] [i_1] [i_2] [i_3]))));
                            var_16 = (((+(var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) != (arr_2 [i_0]))))));
                        }
                    } 
                } 
                var_17 = min((min((((((/* implicit */_Bool) var_3)) ? (3987384627U) : (3867197531U))), (max((var_3), (4294967288U))))), (arr_3 [20U] [i_1] [i_1]));
                var_18 = ((unsigned int) 4294967295U);
                var_19 = ((((/* implicit */_Bool) max((var_8), (arr_2 [i_0])))) ? (arr_5 [i_0] [i_0] [i_0]) : (max((arr_5 [i_0] [i_1] [16U]), (arr_8 [i_0] [i_1]))));
            }
        } 
    } 
}
