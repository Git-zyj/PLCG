/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));
    var_13 = (((((((max(var_2, 46085))) ? var_11 : var_9))) ? (min(var_5, ((min(var_11, 19469))))) : (((min((46090 || 1661334238), var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_14 = (~-46085);
                            var_15 = var_11;
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_16 *= var_10;
                            var_17 *= (max(((((var_1 ^ var_7) && ((2147483647 && (arr_12 [i_0] [1] [1] [9] [i_5])))))), (max(4, 1))));
                            arr_16 [i_2] [i_5] = ((((arr_3 [i_2 - 3]) || ((((arr_4 [i_2] [i_5]) * var_2))))));
                            var_18 = (max(var_18, ((((695820248 / 1026054985) ? (((max(var_0, 1661334237)))) : ((-(!5566302757504754945))))))));
                            var_19 = ((!((((arr_2 [i_5]) ^ 212)))));
                        }
                        var_20 = (!((min(var_7, var_9))));
                    }
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        var_21 = (-263831632 <= -89);
                        var_22 = ((((var_2 ? ((var_0 ? var_9 : (arr_14 [i_0] [i_1] [i_2] [1] [i_2]))) : 1661334253)) * (min(5500185632467985460, var_10))));
                        var_23 = (((((((max(204, 180957521))) ? (max((arr_14 [8] [i_1] [i_1] [1] [i_6]), 1)) : (((min(-32749, var_1))))))) ? (55869 <= 54704) : -27066));

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_22 [i_2 - 3] [i_1] [i_0] [i_2 - 3] [i_7] = (min(59020, 53));
                            arr_23 [i_7] [i_0] [4] [i_2] [0] [11] = var_1;
                            var_24 = (arr_6 [i_0] [19] [i_2]);
                            var_25 -= (!-1501218557);
                            var_26 = ((!(max((!var_10), 1))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_28 [i_8] [i_0] [i_2] [i_0] [i_0] = ((((((var_5 + 9223372036854775807) >> (((1 ^ -17659) + 17691))))) ? 5708 : (max((((arr_8 [i_6 - 3] [i_2] [i_1] [i_0]) ^ 78)), var_6))));
                            var_27 = (((1 > 49) <= ((1 ? (arr_20 [i_2 + 1] [i_6 - 3]) : 9486))));
                            arr_29 [i_0] [i_1] [i_2 + 1] [16] [i_8] = var_9;
                            var_28 = var_10;
                        }
                        var_29 = (max(var_29, (max((((var_7 && var_1) ? (((arr_10 [i_0] [i_0] [i_2] [i_6]) ? 1 : var_8)) : (1 && 3347524317961247996))), (arr_18 [i_0])))));
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        var_30 ^= var_3;
                        var_31 = (max(var_31, (!var_7)));
                        var_32 = ((!(((6092743439652405640 ? -25803 : 8560)))));
                        arr_34 [i_0] [i_9 + 3] = (arr_24 [i_0] [i_0] [i_1] [i_2 - 1] [i_9 + 2]);
                    }
                    var_33 = (max(var_33, (((((min(6500813609625696021, var_10))) && (((1 ? var_1 : -6500813609625696004))))))));
                }
            }
        }
    }
    #pragma endscop
}
