/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = -1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 29728;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_21 -= (!18446744073709551601);

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_2] = ((!(arr_7 [i_2] [i_4 + 1] [i_0 + 2] [i_3])));
                            arr_16 [i_2] = (65535 << (((arr_3 [i_0] [i_1 + 1] [i_1 + 1]) - 3564427020227836991)));
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            arr_20 [i_2] [1] [18] [i_3] [i_3] [23] = (((arr_17 [i_2] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_1 [i_1 - 1] [i_0 - 1]) : 467851827));
                            var_22 = ((-(((-2147483647 - 1) ? 9223372036854775808 : 1))));
                        }
                        arr_21 [i_1] [i_2] [13] [22] [i_3] [i_2 + 1] = 583;
                    }
                    arr_22 [i_2] [7] = (arr_19 [i_2] [i_2] [i_2 - 1] [i_2] [i_2]);
                }
            }
        }
        arr_23 [i_0 - 1] [i_0] = 17828747990316444246;
        var_23 += (arr_18 [i_0 + 1] [i_0 + 1] [10] [i_0 + 1] [i_0 + 1]);
        var_24 += (arr_8 [i_0] [0] [i_0 + 2]);
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = max((max(0, (((-(arr_1 [i_6 + 2] [i_6])))))), (((-1943 ? 29387 : 0))));
        var_25 = (~18446744073709551601);
    }
    var_26 -= (max(-1943, (max(115, 9223372036854775807))));
    #pragma endscop
}
