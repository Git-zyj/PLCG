/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83808
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
    var_16 += var_15;
    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((16482731480622222375ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))))))));
    var_18 = ((/* implicit */short) ((signed char) 562949953417216ULL));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = (-(arr_2 [(short)12] [i_1] [i_1 + 1]));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(16ULL))), (arr_0 [i_0])))) ? (arr_2 [i_0] [(signed char)7] [i_1 + 1]) : (0ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_1);
}
