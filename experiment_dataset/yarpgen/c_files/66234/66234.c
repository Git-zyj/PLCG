/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_21 &= ((!((!(arr_0 [4])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_22 -= (((arr_2 [i_3]) < var_4));
                        var_23 = var_8;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_24 = (arr_15 [i_4 + 3]);
        var_25 *= (!178);
        arr_17 [i_4] = (((((((arr_13 [i_4]) <= var_14)))) * ((8191 << (((arr_14 [i_4 + 3]) + 109))))));
    }
    var_26 = var_7;
    #pragma endscop
}
