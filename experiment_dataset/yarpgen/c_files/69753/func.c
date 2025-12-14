/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69753
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 1] [i_2] [(signed char)13])) << (((((/* implicit */int) var_10)) - (50074)))))) || (((/* implicit */_Bool) min((arr_4 [i_2 + 1] [i_2 + 1] [i_2]), (arr_4 [i_2 - 1] [i_2] [7LL])))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2]);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */short) var_4);
}
