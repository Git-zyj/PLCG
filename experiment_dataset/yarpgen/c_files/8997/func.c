/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8997
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_10 ^= arr_3 [i_0];
                    arr_6 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1 - 2] [(_Bool)1])) ? (((/* implicit */unsigned int) var_2)) : (arr_2 [i_1 - 2] [i_1 - 2]))) ^ (((((/* implicit */_Bool) arr_0 [i_1 - 2] [(unsigned short)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (arr_2 [i_1 - 2] [i_1 + 2])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)25075))));
}
