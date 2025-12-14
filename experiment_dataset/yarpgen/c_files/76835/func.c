/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76835
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
    var_13 = var_2;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (var_8)));
                    var_15 = var_9;
                    var_16 = (i_0 % 2 == zero) ? (((/* implicit */short) max((((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-18995)))) + (2147483647))) >> ((((+(((/* implicit */int) arr_7 [i_0] [i_0])))) - (22958))))), (((/* implicit */int) (short)19273))))) : (((/* implicit */short) max((((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-18995)))) + (2147483647))) >> ((((((+(((/* implicit */int) arr_7 [i_0] [i_0])))) - (22958))) + (9645))))), (((/* implicit */int) (short)19273)))));
                }
            } 
        } 
    } 
}
