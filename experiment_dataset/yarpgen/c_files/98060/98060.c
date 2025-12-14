/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 *= ((var_12 || (arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 1])));
                        var_20 = (arr_8 [i_0]);
                    }
                    var_21 = (var_18 ? var_4 : (max(((((arr_6 [i_0] [i_1] [i_2]) << (var_16 - 1429065049)))), ((var_1 ? 0 : var_3)))));
                    arr_9 [i_1] [i_0] [3] = ((((((~var_16) >> (((((arr_7 [i_0] [i_1] [i_2] [i_1] [i_0 + 3]) ? var_4 : 1282874733)) - 5876815865927963297))))) && ((var_7 >= (~var_14)))));
                    var_22 = (min(var_22, -var_2));
                }
            }
        }
    }
    var_23 = var_1;
    var_24 = (~var_7);

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_25 = ((-(arr_11 [i_4] [i_4])));
        var_26 -= (min((((arr_10 [i_4] [i_4]) ? var_18 : var_2)), ((max(var_6, var_2)))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_27 = ((1282874733 ? 492582029 : 1282874750));
                        var_28 = (max(var_28, (arr_11 [i_4] [i_5 - 1])));
                    }
                }
            }
        }
    }
    var_29 = ((-var_16 || (var_5 & var_17)));
    #pragma endscop
}
