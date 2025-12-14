/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79795
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
    var_18 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (arr_1 [i_0 + 1]))) : (((((/* implicit */int) (signed char)85)) / (((/* implicit */int) (signed char)86))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0])))))) || ((!(((/* implicit */_Bool) (~(arr_2 [i_0]))))))));
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (max(((short)26532), (((/* implicit */short) (signed char)-87))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1]))))) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1])))))))) : (arr_0 [i_0 + 1]));
            }
        } 
    } 
}
