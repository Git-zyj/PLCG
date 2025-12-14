/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67989
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 4]))))) ? ((+(-548016425280288176LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
                var_17 = ((long long int) arr_3 [i_1 - 3] [i_1] [i_1 + 3]);
                var_18 = ((/* implicit */short) arr_4 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */short) (_Bool)1);
    var_20 = ((/* implicit */short) ((max(((+(var_11))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_1))))))) > ((~(max((((/* implicit */long long int) (_Bool)1)), (var_15)))))));
    var_21 = (-(var_12));
}
