/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, -189690864));
                var_15 = -189690864;
                var_16 = -14047;
                var_17 = (min(var_17, -14047));
            }
        }
    }
    var_18 = -2147483630;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = 17001418141146914538;
                var_19 ^= 2147483629;
                var_20 &= -24309;
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_14 [i_4] = 30;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_21 ^= 1445325932562637076;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_22 = -1681;
                                var_23 ^= 11600;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {

                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        arr_33 [i_11] = 31;
                        var_24 = 14046;
                        var_25 += 1;
                        arr_34 [i_4] [i_9] [i_10] [0] = -8970184848687671894;
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_26 += -14047;
                        var_27 = 102;
                    }
                    arr_37 [i_4] [i_9] = 2738698952659951788;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_28 = 2147483644;
                                var_29 = 189690864;
                                var_30 = 14028;
                                var_31 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_32 = 196;
        var_33 = -1681;
        arr_46 [i_15] |= 80;
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 19;i_16 += 1)
    {
        arr_49 [5] [5] = -31;
        var_34 += -189690869;
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 19;i_19 += 1)
                {
                    {
                        arr_59 [i_16 + 2] = 32068;
                        var_35 = 39902;
                        arr_60 [i_16] [i_16] = -8483994570660279498;
                        var_36 |= 39927;
                        var_37 = 39936;
                    }
                }
            }
        }
    }
    #pragma endscop
}
