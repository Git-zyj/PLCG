/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(0 < 17179869180)));
    var_21 = -17179869207;
    var_22 = 17179869206;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (17179869207 | 126);
        var_23 -= 17179869180;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_24 = var_13;
                        arr_12 [i_1] [i_2] [i_3] [i_1] = (~12261887173795986732);
                        arr_13 [12] [i_4 + 1] [12] &= (0 && (((9223372036854775807 && 7) || (!-31708))));
                        var_25 = 948725895;
                    }
                }
            }
        }
        arr_14 [i_1] [i_1] = 32763;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_17 [1] = (~-9997);
        arr_18 [i_5] [i_5] = (var_19 / 17179869168);

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_26 = 31707;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [i_7] [i_8] [i_8] = ((!(9223372036854775807 < 32762)));
                        var_27 ^= (-9223372036854775807 != 12479918954467088380);
                    }
                }
            }
        }
        arr_29 [i_5] = 4294967295;
        arr_30 [i_5] = var_6;
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_33 [i_9] = (1 != 4294967295);
        arr_34 [i_9] [i_9] = (-948725895 >> 1);
        arr_35 [i_9] = var_5;
    }
    #pragma endscop
}
