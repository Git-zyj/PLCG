/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (-32767 - 1);
    var_12 = 219;
    var_13 = 36;
    var_14 = 31905;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, var_9));
                    var_16 = (max(var_16, (arr_5 [i_0] [i_1] [i_2])));
                }
            }
        }
        var_17 = 65529;
        var_18 = 65529;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 = (arr_5 [i_3] [i_3] [i_3]);
        var_20 &= -30;
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        var_21 = 26923;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_18 [i_4 - 2] [i_4 + 1] [i_6])));
                    var_23 = var_3;
                    arr_19 [i_4] [i_4] [i_6] = 1;
                    var_24 = (min(var_24, 0));
                }
            }
        }
        var_25 = (max(var_25, (arr_16 [i_4 - 3] [i_4 - 2] [6] [i_4 - 2])));

        /* vectorizable */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            var_26 |= 0;
            var_27 = (arr_13 [i_7 - 1] [i_4] [i_4]);
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_28 &= 206980622;
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_29 = (arr_20 [i_8 + 1] [i_4]);
                            arr_33 [i_4] [i_10] [i_4] = (arr_11 [17]);
                        }
                    }
                }
            }
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                var_30 = 17592186040320;
                var_31 = (arr_15 [i_4]);
            }
            arr_37 [0] [6] [i_8 + 2] &= (arr_24 [18] [18]);
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            arr_41 [i_4] = var_2;
            var_32 = var_5;
            var_33 = 247;
        }
        var_34 = var_7;
    }
    #pragma endscop
}
