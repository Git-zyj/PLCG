/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_16, 44107);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 -= (min(((((((-21 ? 50868 : 14668))) ? 47382 : ((min(20, -40)))))), (min(((2533051564 ? 3691085333 : 341642195)), (-32429 | -8563)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = ((603881960 ? ((82 ? ((1 ? 18 : 1)) : (6 == 40))) : 30820));
                                var_21 = (min((((var_4 + 2147483647) >> (11049945301970585685 - 11049945301970585679))), ((9675831371168497109 ? 47380 : -17))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= (((((49576 + (24243 * -15969)))) ? (max((!var_16), 2607464579468543309)) : (((6453292913513709502 ? (1558256920695305716 != 2533051564) : var_9)))));
    var_23 = -467534843;
    var_24 = ((var_12 ? var_2 : ((var_15 ? (202 == var_4) : 60964))));
    #pragma endscop
}
