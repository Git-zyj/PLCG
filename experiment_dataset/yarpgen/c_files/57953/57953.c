/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 &= (((-13911 ? (0 + 227) : -13911)) >> 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = ((!((min(((var_8 ? 28 : 18446744073709551591)), ((max(14, 200))))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_16 += (arr_8 [i_0] [i_0] [6] [i_0]);
                    arr_9 [i_2] [i_1] [i_1] [i_1] = 200;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] = var_12;
                    arr_14 [i_0] [i_1] [i_3] = (~(((arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2]) << (var_12 - 1910375372))));
                }
                var_17 += ((((min(-13925, var_1))) ? ((~((48 ? (arr_12 [i_0] [i_1] [i_1]) : 0)))) : (!var_9)));
                var_18 = 4184793902;
            }
        }
    }
    #pragma endscop
}
