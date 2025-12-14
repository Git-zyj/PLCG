/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59144
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
    var_11 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (min((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_4 [(unsigned short)20] [(unsigned short)20] [i_1 - 1]))))) < (arr_2 [(_Bool)1]))), (arr_4 [i_0 + 2] [(_Bool)1] [i_1])))));
                var_13 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                var_14 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_9);
}
