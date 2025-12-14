/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -252;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 &= var_6;
                var_12 = 746061357;
                var_13 = (min(var_13, (((-746061362 ? 0 : 746061357)))));
                var_14 = (((!60) ? var_8 : 1216383880));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_15 *= (min((arr_6 [i_3 + 1] [8]), -746061375));
            var_16 = (((var_9 ? var_2 : 8192)));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_17 = ((((((~(arr_4 [i_4] [i_4] [i_2]))))) ? -var_5 : (((2147483647 | 60) | (6 / 1719770480)))));
            arr_13 [i_4] = ((!((((((7 ? -124 : 57))) ? 250 : var_3)))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_18 = -3122;
            var_19 = (!45219);
            arr_16 [i_2] [i_2] = ((((var_6 ? 243 : var_5)) != (var_0 <= -32747)));
            var_20 &= -7;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_21 = (max(var_21, 99));
            var_22 = var_3;
            var_23 = (((var_7 ? 3 : var_7)));
        }
    }
    #pragma endscop
}
