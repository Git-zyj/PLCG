/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = 3692;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 |= ((!(((arr_10 [i_0]) == 3686))));
                        var_19 = ((-(((arr_10 [i_0]) << 1))));
                        arr_11 [i_0] [i_1] [i_0] = (-(arr_4 [i_3] [i_1]));
                        var_20 = (arr_0 [i_0] [i_1]);
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (max((((((4 * (arr_1 [i_4] [i_4])))) ? 0 : (arr_2 [i_4]))), -3671));
        var_21 = ((+(((arr_10 [i_4]) >> (((arr_10 [i_4]) - 10551542690819430063))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 *= -var_14;
        var_23 = (max((-1996073333 + var_6), 14945929364377383432));
        var_24 = ((((((max(2097151, 1))) | (4294967280 + 8184))) > var_11));
        var_25 = (((((arr_4 [i_5] [i_5]) != (arr_0 [18] [i_5]))) ? var_17 : ((-(arr_12 [i_5])))));
    }
    var_26 = (max(var_26, (((var_15 || ((max(var_17, 1))))))));
    var_27 = var_2;
    #pragma endscop
}
