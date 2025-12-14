/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        var_20 = (--1694976702);
        var_21 = (var_10 / 8154794095747140578);
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_22 = var_19;
                                var_23 = (min(var_23, (((-((11977220354810577535 * (arr_15 [i_2] [i_1 + 2]))))))));
                            }
                        }
                    }
                    var_24 = var_13;
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_25 = ((!(-1 * 70368743915520)));
            var_26 = (arr_15 [i_1 - 1] [i_6]);
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_27 = (min(var_27, (max(((8191 ? var_9 : (~var_0))), ((((arr_5 [i_7] [i_7]) ? (arr_11 [i_7]) : (!var_1))))))));
        arr_21 [i_7] [i_7] = (max(1694976698, 203));
    }
    var_28 = (max(var_28, ((((!-var_3) ? ((((-4901483019928792335 | var_10) > -var_15))) : (((((min(10820398357359203466, var_15))) || ((((-4901483019928792335 + 9223372036854775807) >> (var_16 - 2451265586))))))))))));
    #pragma endscop
}
