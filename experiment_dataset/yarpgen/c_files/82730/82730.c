/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((max(29, var_6))) ? 59015 : (59002 + 119)))) ? var_17 : (1660792238 / 15872)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_20 = (arr_1 [i_0] [i_2]);
                    var_21 += ((((max((((arr_0 [i_2]) ? var_14 : (arr_7 [i_0] [i_0]))), ((max(var_12, (arr_5 [i_0] [i_1] [i_1]))))))) ? ((var_12 | (max(var_4, 6439973889741166775)))) : ((((1660792249 > var_18) ? ((var_1 ? var_4 : (arr_3 [i_0]))) : ((49662 ? (arr_5 [i_0] [i_2] [i_2]) : -117)))))));

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_22 &= (min(((((6537 == -27998) >> (var_5 - 77)))), (((min((arr_2 [i_0]), 1)) & ((min((arr_12 [i_4] [i_3] [i_2] [i_1] [i_1 - 4] [i_0]), 4294967295)))))));
                            arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] = (((arr_4 [i_3] [i_1] [i_3]) != (((1 ? (arr_10 [i_0] [i_0] [i_2] [i_3] [i_0]) : var_1)))));
                            arr_16 [i_0] [i_0] = (min(((((var_0 ^ (arr_5 [i_0] [i_0] [i_4]))) > -var_2)), ((((~(arr_5 [i_4] [i_2] [i_0]))) == (arr_3 [i_0])))));
                            var_23 = (((((-1159492117 ^ 1) + 2147483647)) << (var_15 >= var_18)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_0] [i_0] = ((-var_5 >= (((arr_5 [i_0] [i_1] [i_2]) ? (arr_0 [i_3 + 1]) : -1))));
                            var_24 = (((var_3 && var_0) ? var_6 : 19201));
                            var_25 = ((-63 ? 1660792208 : ((14542 << (((-43 + 62) - 14))))));
                            var_26 = (var_18 ? (arr_8 [i_3 - 2] [i_1] [i_1 - 2]) : var_0);
                            var_27 *= var_1;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_28 = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_2 : var_7));
                            arr_24 [i_2] [i_2] [i_0] = (((((-1660792235 ? (arr_11 [i_1 - 2] [i_1] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_6]) : ((56 ? 6546 : (arr_0 [i_3])))))) ? 127 : (arr_4 [i_1] [i_1] [i_1])));
                        }
                        arr_25 [i_2] [i_1] [i_0] = (var_1 ? ((((-127 ? var_10 : var_18)) | (var_8 ^ -9223372036854775783))) : ((((arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]) | (min(-1660792209, -1159492111))))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_29 |= -71;
                        var_30 = var_9;
                        arr_29 [i_7] [i_7] [i_2] [i_1 - 4] [i_0] = ((-84 ? 19210 : -32756));
                    }
                }
                arr_30 [i_0] [i_1 + 1] = (((((arr_1 [i_0] [i_1 - 3]) ? var_11 : 36662)) < (max(5, 4667))));
            }
        }
    }
    var_31 += ((var_15 ? ((((var_3 ? var_0 : var_13)) ^ (~var_9))) : (((((var_15 ? var_16 : var_8))) ? var_14 : ((58 ? var_16 : var_13))))));
    var_32 = var_6;
    #pragma endscop
}
