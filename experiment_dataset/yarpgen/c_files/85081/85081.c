/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 32;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 ^= 113;

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (((min(24, -91))));
                                arr_11 [i_0] [i_1] [13] [i_4] = 22;
                            }
                        }
                    }
                    arr_12 [9] [i_1] [i_1] [9] = (((~(125 || 38))));
                    var_22 += ((+((((-125 || 91) && 18)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = min(38, ((((18 / -80) <= -37))));
                                arr_19 [i_1] [i_0] [0] [0] [16] [i_6] [7] = 46;
                                arr_20 [i_0] [i_1] [11] [15] = -24063;
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_1] = 17;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_24 = (max((!-96), (((~-42) ^ (~15)))));

                    for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_0] = (-88 ^ 32);
                        arr_30 [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] = (((((((32764 << (((-45 + 72) - 14)))) == ((max(-113, (-32767 - 1))))))) & 32742));
                    }
                    for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [i_1] [6] [i_9] [16] |= -32747;
                        var_25 ^= (((-18 != -4) > ((max((73 && -4), (-46 && 22239))))));
                    }
                    arr_36 [i_0] [i_0] [i_1] = ((95 & ((max(20795, 45)))));
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    arr_39 [i_1] [10] = (~-2229);

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_26 += (~-64);
                        arr_42 [i_1] = (max((-127 - 1), 3));
                    }
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        arr_47 [i_0] [i_1] [i_1] [i_0] [i_0] = ((!((max(((max(-5693, 8845))), (4095 & 32750))))));
                        var_27 = (min(10300, ((((-127 - 1) || 29701)))));
                        arr_48 [i_1] [i_1] [i_1] [i_12] = ((~(+-0)));
                        var_28 *= -2;
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_53 [i_0] [i_0] [i_1] [i_13] [4] = (81 < 1941);
                            var_29 = 965;
                            arr_54 [i_1] [i_1] = -1;
                            arr_55 [i_1] = 113;
                            arr_56 [i_1] [i_0] [12] [i_1] [i_1] = 113;
                        }
                        var_30 = (min(var_30, (((66 & (-23936 - -23941))))));
                        var_31 = 115;
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_32 = ((((-((-32767 - (-32767 - 1))))) / ((-(31 - -125)))));
                        var_33 = (max(23307, 25105));
                        arr_59 [i_1] [i_1] = -127;
                        arr_60 [i_15] [12] [i_1] [i_1] [i_0] [i_0] = 0;
                    }
                    var_34 = 15167;
                    arr_61 [i_1] [i_1] [14] [i_1] = 23;
                    var_35 = (min(var_35, ((((23302 * -75) / ((min(-22637, 82))))))));
                }
            }
        }
    }
    var_36 -= 17304;
    #pragma endscop
}
