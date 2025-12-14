/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(-6683954987119060271, var_4));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = max((((0 ? -1 : 1))), 9443851099531931141);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = 9002892974177620501;
                        var_21 ^= (min((arr_10 [5] [i_2 - 3] [i_2 + 1]), ((var_17 ? 9002892974177620466 : (arr_10 [i_2 + 1] [i_2 + 1] [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_0 - 2] = 9002892974177620452;
                            var_22 = (min(var_22, (!0)));
                            var_23 |= (((((var_16 ? var_0 : 593089089))) ? (arr_16 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 3]) : (arr_9 [i_0 - 2] [1] [i_1 - 1] [i_2] [1] [i_5])));
                            arr_18 [i_0 - 2] [i_1] [7] [12] [10] = ((0 ? 64802 : 0));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_24 = (arr_3 [i_0]);
                            var_25 |= (arr_1 [i_0] [i_1]);
                            arr_21 [i_0] [i_0] [6] [i_0] [i_0 - 1] [i_0] = ((-27475 ? 16777212 : -23416));
                            var_26 = -2892030245764922547;
                            arr_22 [i_0] [7] [i_0 - 2] = (-1 + 9443851099531931150);
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_27 = (9 ? (arr_9 [i_0] [i_0 + 1] [i_2] [7] [i_2 - 1] [i_7 + 1]) : (arr_9 [i_0 - 2] [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 1] [i_7 - 1]));
                            arr_25 [12] [i_1] [4] [i_1] [i_7 - 1] [i_1 - 1] &= (arr_0 [i_0 - 2]);
                            arr_26 [i_7] [11] [i_2 + 1] [i_1] [i_7] = ((arr_12 [i_0 - 2] [i_1 + 1] [i_0 - 2] [i_0 - 2] [5]) ? ((-23 ? (arr_0 [i_2 - 3]) : 8)) : 22652);
                            var_28 = -126;
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_29 -= 51863;
                            var_30 = (arr_3 [1]);
                        }

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_34 [i_0] [i_1] [9] [i_4] [i_9] &= 1850675268;
                            var_31 = (!-26362);
                            var_32 = ((9002892974177620466 ? -21197 : (arr_29 [1] [i_2] [6] [12])));
                        }
                    }
                }
            }
        }
        var_33 ^= 268435392;
    }
    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        var_34 = (arr_5 [13] [i_10 - 1]);
        arr_37 [i_10 - 2] = arr_24 [i_10] [0] [6] [i_10 - 2] [i_10] [i_10 - 2];
        arr_38 [1] = (((((6 ? (min(-566489540, (arr_30 [i_10] [i_10 - 2] [i_10]))) : 132))) && 158));
    }
    var_35 = (min(var_15, 192));
    var_36 = (min(var_36, var_10));
    #pragma endscop
}
