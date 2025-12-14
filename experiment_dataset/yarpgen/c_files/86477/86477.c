/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 2150496731;

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_18 -= 24963;
            var_19 = 206228011;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_3 - 1] [i_4] [i_1 + 1] [i_4] [i_0] [i_0] = 36229;
                            arr_15 [i_4] = 0;
                        }
                    }
                }
            }
            arr_16 [i_0] = 1023;
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            arr_21 [i_5] = 39746;

            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                var_20 ^= 16384;
                var_21 = (max(var_21, 951888568));
            }

            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                var_22 = 49131;
                var_23 = 4294967295;
                var_24 = 127;
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_25 = 49152;
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_26 = 2922866111;
                            arr_36 [i_0] [i_5] [i_8] [i_9 + 1] [i_10] = 51042;
                            var_27 = 14493;
                            var_28 -= 49151;
                            arr_37 [i_0] [i_5] [i_8] [i_9 - 3] [i_10] = 2147483648;
                        }
                    }
                }
            }
        }
        var_29 = 4294967294;
    }
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        var_30 = max((max((min(3603008341, 98957634)), (min(var_2, (arr_12 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1]))))), (max(((min(50307, 49127))), (max((arr_19 [i_11] [i_11]), 49131)))));
        arr_41 [i_11] = max(55279, 10261);
    }
    var_31 = min((min(((max(var_11, 14511))), (min(var_4, var_16)))), ((min((max(64320, 30122)), 43981))));
    #pragma endscop
}
