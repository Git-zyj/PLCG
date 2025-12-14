/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((!(((9223372036854775786 * 0) <= 63434))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (((min(34866, (arr_1 [i_1 + 1])))));
                        arr_14 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = min(536870912, (1 && 1));
                        var_20 = min(1, 187);
                        arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_0] = ((!((min(var_4, (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3]))))));
                    }
                }
            }
        }
    }
    var_21 = 0;
    var_22 = (min(var_13, (((!-1) ? var_5 : var_12))));
    var_23 = min((((-6 + 2147483647) << (var_12 - 1))), ((((min(6, var_12))) | ((min(var_10, 197))))));
    #pragma endscop
}
