/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 13559;
        arr_3 [i_0] = (((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_16 |= ((-13560 ^ (((arr_4 [i_1]) & -13549))));
        var_17 = -3367;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 ^= ((-(13559 % -16981)));
            arr_10 [i_1] [i_1] [i_2] &= ((!((((arr_4 [i_1]) ? -3367 : (arr_6 [i_1]))))));
            var_19 |= (((arr_4 [i_1]) | 3724679832));
        }
        var_20 = (((arr_7 [i_1] [i_1] [i_1]) ? -13549 : 5602319455841132710));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_21 = (arr_7 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_21 [i_4] [i_4] [i_5] = ((!(((~(arr_16 [i_5] [i_3] [i_4]))))));
                    arr_22 [i_5] [i_5] = (max((arr_12 [i_3]), 3040719793));
                    var_22 = var_13;
                    var_23 = (max(var_23, var_2));
                }
            }
        }
    }
    var_24 = 15799855745200042622;
    var_25 -= var_3;
    #pragma endscop
}
