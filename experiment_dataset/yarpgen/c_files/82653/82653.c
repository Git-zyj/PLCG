/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(64698, -97)) + ((var_5 ? 3954 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(1965023439, ((+(((arr_1 [5]) ? (arr_3 [i_0] [i_1]) : 3926054594))))));
                var_18 *= ((+(min((arr_4 [i_0]), 0))));
                var_19 *= (max(var_16, (((((arr_5 [i_1] [i_0]) == 1))))));
            }
        }
    }
    var_20 = (min((max(((var_14 ? 15764580149962597991 : -1)), ((max(-8637, var_9))))), var_5));
    #pragma endscop
}
