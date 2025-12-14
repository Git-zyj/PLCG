/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 27;
        var_11 = (+-3346);
        arr_4 [i_0 + 1] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_12 = 104;
        var_13 *= -63;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 -= 4294967295;
            var_15 &= -86;
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_16 = 47;
            var_17 -= 0;
            var_18 = 2147483647;
            var_19 ^= -30113;
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    {
                        var_20 = 229;
                        var_21 -= 0;
                        var_22 = (max(var_22, 229));
                        var_23 *= 116;
                    }
                }
            }
            arr_23 [4] [5] [i_5] = 4032;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_24 = (min(var_24, 5500369282590550651));
                    var_25 += 2147483647;
                    var_26 = (~5275);

                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_27 += 103;
                        var_28 &= 57;
                        arr_32 [13] [i_8] [i_8] = -224;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_35 [6] [i_8] [i_9] [i_9] = 54;
                        arr_36 [i_2] [4] [4] [4] [i_2] &= -24139;
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_40 [i_8] [i_8] [13] [i_8] [i_8] [i_8] = 59632;
                        var_29 = 128;
                    }
                    arr_41 [1] [i_8] [i_9] = 17803378244212850507;
                }
            }
        }
        var_30 = 198;
    }
    var_31 = var_0;
    #pragma endscop
}
