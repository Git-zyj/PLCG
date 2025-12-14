/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])));
                arr_5 [i_1] = -2932007872;
                var_21 = (max((arr_0 [i_0] [i_0]), var_0));
                var_22 = ((var_14 ? var_17 : (arr_3 [i_0])));
                arr_6 [i_1] [i_1] [i_0] = ((((((((arr_1 [i_0]) + var_7))) - (arr_2 [i_0]))) - (((var_7 - (((arr_3 [3]) - (arr_1 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_14 [i_2] = (~var_17);
                var_23 += var_8;
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
