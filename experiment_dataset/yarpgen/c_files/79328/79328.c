/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 != ((-240 ? var_10 : var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] &= ((var_5 ^ ((((((arr_2 [i_1]) ? 9873 : var_9))) ? (((var_1 ? var_2 : 1))) : (arr_3 [i_0] [i_0])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1 + 1] [i_2] [i_3] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                        var_12 |= var_0;
                        var_13 &= var_3;
                    }
                }
            }
        }
    }
    var_14 = (var_0 ^ var_5);
    var_15 = (~var_9);
    #pragma endscop
}
