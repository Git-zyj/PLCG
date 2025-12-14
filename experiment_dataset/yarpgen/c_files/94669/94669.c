/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_20 = ((21887 ? var_10 : var_18));
                    arr_10 [i_0] = (((arr_1 [i_0]) * 2351122233));
                }
                arr_11 [7] [10] [7] = (65523 & 65517);
                arr_12 [i_0] [i_1] [i_1] = (arr_8 [6] [i_0] [i_1] [i_1]);
                var_21 = ((7415 ? (((var_10 ? var_15 : var_11))) : ((var_19 ? 4057864718591073268 : var_11))));
            }
        }
    }
    var_22 = 3840;
    #pragma endscop
}
