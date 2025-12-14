/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = (((((250 >> 5) ? (arr_0 [i_0]) : (min(var_3, 250))))) ? ((min((arr_0 [i_0 + 1]), 1))) : (arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = 1;
                    arr_8 [i_1] [i_2] = 2097151;
                    arr_9 [0] [i_1] [0] [0] = 1023;
                    var_17 -= (((~var_5) - (((((arr_5 [i_0]) >= var_7)) ? ((max(52638, var_0))) : var_1))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = var_5;
        arr_14 [i_3] [i_3] = (((max(((0 ? var_13 : var_8)), (4292870145 != 0))) ^ var_6));
        var_18 = var_5;
    }
    var_19 = (max(4292870145, -var_11));
    #pragma endscop
}
