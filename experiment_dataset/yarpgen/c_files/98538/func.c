/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98538
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
    var_10 = ((/* implicit */short) var_2);
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_1]))))));
                var_12 = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) != ((+(((/* implicit */int) arr_0 [i_0]))))))), (((short) arr_0 [i_1]))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */signed char) var_1);
}
