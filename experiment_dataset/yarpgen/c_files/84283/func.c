/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84283
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) arr_0 [i_0]);
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (arr_2 [3] [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_1 [i_0])))));
                var_15 = min((((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) min((arr_1 [5]), (arr_1 [i_1])))) : (max((arr_0 [8]), (((/* implicit */int) arr_1 [i_0])))))), (min((max((arr_3 [(signed char)1]), (((/* implicit */int) arr_1 [i_0])))), (arr_2 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_16 = var_12;
    var_17 = ((((/* implicit */_Bool) min((min((var_7), (var_12))), (var_12)))) ? (((((/* implicit */_Bool) -1802377905)) ? (((/* implicit */int) (signed char)-5)) : (134152192))) : (var_12));
}
