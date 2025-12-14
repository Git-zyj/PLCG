/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81948
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
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)59)))) / (max((((/* implicit */int) arr_1 [(signed char)18] [i_1])), (min((((/* implicit */int) arr_2 [i_0])), (var_15)))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (((-(((((/* implicit */int) (short)4)) & (((/* implicit */int) arr_1 [i_1] [i_1])))))) >= (((int) (_Bool)1)))))));
            }
        } 
    } 
}
