/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((+(min((var_7 <= var_11), ((var_2 ? var_10 : var_2)))))))));
    var_15 = ((var_6 * ((62842 ? 1 : 7288707515864037198))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = ((0 << (((7288707515864037215 | 7288707515864037196) - 7288707515864037207))));
                                var_17 = ((((min(7993482779352425563, ((((arr_10 [i_4] [i_2] [i_0]) ? var_7 : var_13)))))) - var_8));
                                arr_15 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_3] [i_4] [i_0] [i_1] = 25519;
                                arr_16 [0] = ((+((min((arr_14 [i_4 - 1] [i_3] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]), 10)))));
                            }
                        }
                    }
                    arr_17 [i_0] = (min((-var_6 / 9), var_10));
                    var_18 = (((max(192, -3850))));
                    var_19 = max(((min(232, 64149))), -7993482779352425557);
                }
            }
        }
    }
    var_20 = (min(-613713485, 7993482779352425557));
    #pragma endscop
}
