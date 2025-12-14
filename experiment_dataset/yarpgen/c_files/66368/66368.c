/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max((((!(((var_3 ? var_14 : var_17)))))), var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 -= (((!0) ? 7230666716170224031 : (((arr_0 [i_0 - 1]) ? 8213 : var_18))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, ((~(((arr_7 [i_0 - 1] [4]) ? 57327 : 9))))));
                    var_23 = (min(var_23, var_13));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_24 *= ((-(arr_7 [i_0 + 2] [1])));
                    var_25 ^= (~var_12);
                    var_26 = ((~(arr_6 [i_1] [i_3] [i_3 + 4] [i_3 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
