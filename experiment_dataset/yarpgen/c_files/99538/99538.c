/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(17687, -85));
    var_21 = (~var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((3346796936 ? 17669 : var_17))) ? (-17687 + var_9) : var_1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_22 = (1 < 17687);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((-1 > 17717) << (33554431 - 33554431)));
                    arr_9 [i_1] [i_2] = (17687 == 17687);
                    var_23 = (min(var_23, 1771700347));
                }
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_4] [i_3] [i_1] [i_0] = var_6;
                                var_24 = (min(-85, (max((~1), 86))));
                                var_25 &= 1;
                                var_26 = -6328631581245217846;
                            }
                        }
                    }
                    arr_19 [i_0] = (~35);
                    var_27 = var_17;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_1] [i_6] = 71;
                    var_28 &= 8433816990671150125;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [i_0] = 127;
                    arr_27 [i_1] = 1;
                    var_29 ^= (max(-88, -17687));
                    var_30 = (((((19691 | (!var_1)))) ? ((-2407076191 ? ((var_10 ? 1 : var_18)) : (~var_17))) : ((~((-37 ? 43 : var_18))))));
                }
                var_31 = (~1099511627775);
                var_32 -= var_13;
                var_33 = (max(var_33, var_13));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                {
                    var_34 = (!18446742974197923857);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_40 [i_9] = (((((var_1 ? 17687 : (!-1)))) ? ((1 ? (!1) : ((1 ? 8212798542875862414 : 1)))) : (((var_1 ? -6761269475683646583 : 1)))));
                                var_35 = (max(var_35, (((38 ? (~1771700371) : ((((2610835114 / 32767) ? (!var_0) : ((1684132182 ? 1 : var_6))))))))));
                            }
                        }
                    }
                    var_36 -= -66;
                }
            }
        }
    }
    #pragma endscop
}
