/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1259897467459363441;
                var_13 *= (((max(1, var_11)) < 0));
                arr_6 [i_0] [i_1] [i_1] = 1600310636;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] = var_7;
                    arr_10 [i_0] = 1;
                    arr_11 [12] [i_1] [i_1] [i_0] = (0 ? var_0 : var_5);
                    var_14 = (var_6 * -10848);
                }
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
