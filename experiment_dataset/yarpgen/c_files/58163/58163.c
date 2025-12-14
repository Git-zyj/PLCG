/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = var_1;
                            var_12 = min(2147483636, 241);
                            var_13 = 947361054;
                            var_14 = (min((min((arr_5 [i_0] [i_0]), var_0)), (arr_2 [i_3 + 1])));
                        }
                    }
                }
                var_15 -= (arr_9 [12] [i_1] [0] [i_0]);
                arr_10 [8] [i_0] [i_0] = (((((((~1599199582) / (arr_1 [i_0] [i_0]))) + 2147483647)) >> 1065353216));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [15] = ((((~(arr_5 [i_0] [i_4 + 1])))) ? (((arr_4 [i_0 + 1] [i_0]) / (arr_12 [i_4]))) : (~-6));
                            var_16 = var_1;
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_5 + 2147483647) >> (((var_6 < (524224 >= 0)))));
    var_18 = (max(var_18, var_3));
    var_19 += (var_9 * (1 / 14));
    #pragma endscop
}
