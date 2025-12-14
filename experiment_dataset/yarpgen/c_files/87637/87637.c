/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_5 ? (((((var_6 ? var_4 : var_7)) > var_6))) : (var_1 >= -615033332)));
    var_14 = -615033332;
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 += max(((-615033332 * (((var_2 ? var_2 : -615033301))))), (((!(arr_6 [i_0 - 2] [11] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = var_9;
                                var_18 = (max(var_18, ((var_12 && ((min((max(var_0, 4294967295)), 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_3 ? var_5 : (((((var_6 ? var_12 : 4294967273)) <= var_8)))));
    #pragma endscop
}
