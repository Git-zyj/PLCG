/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74046
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = (-(((/* implicit */int) max((arr_2 [i_0]), ((short)56)))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)61))));
                var_22 ^= ((/* implicit */unsigned long long int) min((min((arr_3 [i_1 - 3]), (arr_3 [i_1 - 3]))), (((((/* implicit */_Bool) 451916708)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
}
