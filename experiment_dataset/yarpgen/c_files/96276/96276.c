/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_6 ? ((var_9 ? var_13 : var_10)) : var_10))), var_4));
    var_16 = (min(133169152, -var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_17 |= var_14;
                    var_18 -= var_11;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] = -1;
                    arr_14 [i_1] [i_3] [i_1] [i_1] = var_3;

                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_4] |= (min(((min(var_10, var_5))), ((((((arr_0 [i_3]) ? 26894 : var_9))) ? var_5 : (var_14 / 249)))));
                        arr_18 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] = (max((max(-2147483645, (!var_1))), (arr_0 [i_0])));
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_19 = 604815767;
                        var_20 += (min(-604815767, (((arr_1 [i_5 + 2]) | var_0))));
                        arr_22 [i_0] [i_1] [i_1] [i_1] = (arr_4 [i_1] [i_1]);
                        var_21 = (((1 ? 18446744073709551599 : 55950)));
                    }
                }
                var_22 = (arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]);
                arr_23 [i_0] [i_1] = (max((arr_5 [i_0]), var_1));
                var_23 ^= var_0;
            }
        }
    }
    var_24 = (min(var_24, ((max(var_7, (min(((var_1 ? var_7 : var_5)), ((var_7 ? var_6 : var_10)))))))));
    #pragma endscop
}
