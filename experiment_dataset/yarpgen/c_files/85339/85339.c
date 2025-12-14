/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~(0 >> 1))) ^ (!var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = (-127 - 1);
                var_18 = var_14;
                var_19 = (~1);
                arr_5 [i_1] [i_0] = var_3;
                var_20 &= (((arr_3 [i_0]) - -1));
            }
        }
    }
    var_21 = -6014;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [10] [i_3] [i_3] |= (((1 * 0) ? (2147483647 / 1) : (max(((((arr_10 [2] [i_2] [i_3]) / 101444642))), (max(939524096, var_14))))));
                arr_13 [i_2] [i_2] [i_3] = (((((~(!var_13)))) ? (~1) : (max((!1), ((-(arr_3 [i_2])))))));
                var_22 = (min(var_22, (((((min(55993, var_8))) <= ((43 ? (arr_9 [i_3 - 3]) : var_10)))))));
                var_23 = -1023;
            }
        }
    }
    #pragma endscop
}
