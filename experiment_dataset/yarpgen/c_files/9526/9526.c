/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(-var_12, ((var_6 ? var_13 : 25715)))) <= var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 *= var_11;
                var_19 = (var_0 < var_13);
                var_20 -= var_9;
                var_21 = (min(var_21, (((((max(((var_11 ? var_8 : (arr_0 [i_0]))), var_9))) ? ((3053346054 << (((arr_0 [i_0]) - 23583)))) : ((max((arr_2 [i_0]), (~var_9)))))))));
            }
        }
    }
    var_22 = min(var_8, var_15);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_23 = (min((1241621242 + var_10), (max(-var_8, var_10))));
                arr_8 [i_3 - 3] [i_3] = (min(1241621266, (arr_4 [i_2] [i_3])));
            }
        }
    }
    #pragma endscop
}
