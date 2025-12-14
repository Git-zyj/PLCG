/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6334
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(signed char)18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-13))))) || (((/* implicit */_Bool) (~(arr_3 [i_1]))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((max((arr_3 [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_0 - 1])))) ^ (((/* implicit */long long int) ((int) arr_3 [i_1 - 1])))));
                var_19 = min((((/* implicit */int) var_6)), (-502376692));
                arr_8 [i_0] = ((/* implicit */short) 274485412);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
}
