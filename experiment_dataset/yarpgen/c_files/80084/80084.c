/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_2 / 104), (((((3965119282 ? var_8 : var_3)) < var_8)))));
    var_17 = (min(((max(var_1, var_8))), var_5));
    var_18 -= 157;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((59798 ? (min(((max(64277, 133))), (min((arr_2 [i_2]), 228146971)))) : var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_1 [i_4])));
                                var_20 *= ((95 ? ((((max(-8010918958884210056, -8010918958884210068))) ? (!var_0) : 255)) : (min(0, var_11))));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = 1178582898;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_21 ^= ((((((min(45, 36155))) ? 94 : 1282258582)) & var_0));
                var_22 = var_0;
                arr_21 [i_6] [i_6] = ((((max((var_11 | 151), ((29381 ? var_3 : var_13))))) ? ((min(var_3, var_3))) : -21));
                var_23 = (min(var_23, ((((max(104, (max(44, (arr_14 [i_5] [i_5] [i_6] [i_6] [i_6]))))))))));
            }
        }
    }
    #pragma endscop
}
