/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = var_7;
                var_21 = (max(var_21, ((min(((-(arr_0 [i_1 + 2]))), ((min(1191057010, 1))))))));
                var_22 = var_14;
                var_23 = (max(var_23, (min(((((arr_3 [i_0] [i_1] [i_1 - 1]) == (arr_0 [i_0 + 2])))), (((((1 ? 1 : (arr_1 [i_0])))) ? (arr_4 [i_1] [i_1 - 1] [i_1]) : ((53268 ? var_8 : 73))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_24 ^= (arr_6 [i_2]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_25 = (max(var_25, ((((arr_6 [i_2]) ? (arr_6 [i_2]) : (-55520617 == -1639631408))))));
            var_26 ^= ((~var_15) == (26 == var_3));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] [i_4] = ((((max(0, (((~(-2147483647 - 1))))))) ? 63336 : var_14));
            var_27 = -23065;
        }
    }
    var_28 = (max(16776960, ((min(var_18, var_4)))));
    #pragma endscop
}
