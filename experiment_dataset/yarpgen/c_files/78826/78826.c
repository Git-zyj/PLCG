/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = 51804;
                    var_16 = 24664;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] |= (-127 - 1);
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = 51804;
                                var_17 = 2405024300;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_18 |= -24669;
                        var_19 = 190;
                        arr_20 [i_0] [i_1] [i_1] [i_0] = 2713251335;
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_20 = 24;
                        var_21 -= -109;
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_22 = 27;
                        var_23 &= 3;
                        var_24 = 1;
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = 255;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_1] = 11126971941454188349;
                            var_25 = 18579;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_26 &= 10;
                            var_27 = 2414883639915843157;
                            var_28 += 151;
                            var_29 *= -329404738;
                        }
                        arr_36 [i_0] [i_1] [i_2] [i_2] = 15213;
                        var_30 = 104;
                    }
                }
            }
        }
        arr_37 [i_0] [i_0] = 7;
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        arr_48 [i_11] [i_11] [i_11] [i_11] = -120;
                        arr_49 [i_11] [i_11] [i_11] [i_11] = 4;
                        var_31 -= 54;
                        var_32 = 119;
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        arr_52 [i_13] [i_13] [i_13] [i_15] = 71;
                        var_33 = 32617;
                        var_34 = 11126971941454188349;

                        for (int i_16 = 2; i_16 < 18;i_16 += 1)
                        {
                            var_35 = -24665;
                            var_36 = -109;
                            var_37 = 9223372036854775807;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            arr_60 [i_11] [i_15] [i_13] [i_15] [i_15] |= -120;
                            var_38 = 4294967293;
                        }
                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 18;i_18 += 1)
                        {
                            arr_64 [i_11] [i_11] [i_12] [i_11] [i_18] [i_11] [i_12] = -124;
                            var_39 *= 3042301577;
                            var_40 = 404345352;
                        }
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                    {
                        var_41 = 6144;
                        var_42 = -24668;
                    }
                    var_43 += 11126971941454188349;
                }
            }
        }
    }
    #pragma endscop
}
