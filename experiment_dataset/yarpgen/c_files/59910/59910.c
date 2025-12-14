/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_18 = -236003116;
            arr_5 [i_1] [i_1 + 1] = (min(-12, (!59361)));
            var_19 = (max((!18446744073709551601), (min(18446744073709551597, 2837122649))));
        }
        arr_6 [i_0 - 2] = (max(18446744073709551601, (~14)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 *= ((-(min(15, 15))));
        arr_11 [i_2] = (max((max(0, 14)), 2));
        var_21 = (max(var_21, ((max(18446744073709551600, 1)))));
        arr_12 [i_2] = (!18446744073709551589);
        arr_13 [i_2] = 111;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((max((max(246, 18446744073709551581)), 76)))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    var_23 ^= 1;
                    var_24 = (min(var_24, ((max(0, (max((~1), -0)))))));
                }
            }
        }
        var_25 = 18446744073709551610;
        arr_22 [i_3] [i_3] = min((max(0, 18446744073709551601)), (min(0, 5)));
    }
    var_26 &= 1;
    var_27 &= var_4;
    #pragma endscop
}
