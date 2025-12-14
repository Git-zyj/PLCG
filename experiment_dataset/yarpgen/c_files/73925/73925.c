/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 51146));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, var_13));
        var_17 = 1;
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0] [i_0] = -1351538632;
        arr_5 [i_0] [i_0] &= ((((max(var_1, (!0)))) ? (!28) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 ^= (((arr_10 [i_1] [i_1] [i_1] [i_1]) ? 65507 : ((((arr_10 [i_1] [i_1] [i_1] [i_1]) <= (arr_13 [i_2] [i_2] [i_2]))))));
                    var_19 = (min(var_19, (((3807267376 ^ (arr_1 [i_1 + 1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_20 = ((6341357447287231335 ? (arr_14 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]) : ((((arr_11 [i_1]) || 51169)))));
                                var_21 = 191;
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((-1562852508 ? 64 : 3807267358))))));
                }
            }
        }
        arr_21 [i_1] = (((arr_11 [i_1]) == (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 1])));
    }
    var_23 ^= (((1071644672 ^ var_9) ? var_11 : ((((17969 % 17716633737813076432) >= (((1 ? var_7 : 32387))))))));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_24 = ((487699943 ^ (arr_22 [i_6] [i_6])));
        var_25 ^= (((arr_23 [i_6] [i_6]) != 487699919));
        var_26 ^= (32408 >> 1);
    }
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        var_27 = (min(var_27, ((var_13 ? 32387 : ((((((((arr_12 [1]) ? -32371 : 65))) == var_5))))))));
        var_28 = (min(var_28, (((1 ? -4421540315562224273 : 191)))));
        arr_27 [i_7] [i_7] = (-27811 ? 134217727 : 5837);
        var_29 = 191;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_30 = (max(var_30, (((((max(-1586981498, (arr_15 [i_8] [6] [i_8] [i_8])))) ? ((128 ? ((27 ? 487699904 : 7597)) : -11274)) : 19248)))));
        var_31 -= -15777;
        arr_31 [8] |= ((-4704303617641695725 ? 1 : 18));
    }
    var_32 ^= var_13;
    #pragma endscop
}
