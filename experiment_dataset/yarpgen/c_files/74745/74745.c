/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 += -759037262;
                    var_18 = ((((((min((arr_0 [6] [11]), var_12))) >> (arr_6 [i_2] [i_1 + 1] [i_1 - 2]))) * ((min(var_12, var_12)))));
                }
            }
        }
    }
    var_19 = var_3;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 += (min(0, 9));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_21 = (arr_2 [i_4 - 2]);
                    arr_15 [i_3] [8] [i_5] = (((((((~(arr_14 [i_3] [i_3]))) << (122138996 - 122138980)))) ? (arr_5 [i_3] [13] [i_5 - 1]) : ((var_6 ? (((arr_8 [i_4 + 1]) ? (arr_13 [i_3] [1] [i_4] [i_5]) : (arr_10 [i_5]))) : (arr_6 [i_5] [i_4] [i_5])))));
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_22 = ((128 ? 0 : 29321));

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_23 = (((((arr_18 [i_6] [i_6]) ^ (arr_18 [i_6] [i_6]))) <= (min((arr_18 [i_6] [i_6]), (arr_18 [i_6] [i_6])))));

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_24 = (max((max(1, 29350)), ((((arr_22 [i_7 + 1] [i_8] [1] [7]) || 4993208844031829558)))));
                var_25 = -759037270;
                arr_23 [i_6] [i_6] [i_8] = (!61440);
                var_26 = ((((((194 ? var_2 : (arr_6 [i_6] [i_7 + 3] [i_6]))))) ? (arr_2 [i_8]) : ((min(var_11, var_1)))));
            }
            var_27 = (min((((3 + (((4294967283 ? (arr_2 [i_6]) : var_3)))))), (arr_18 [i_6] [i_6])));
        }
        var_28 |= (((((var_5 ? ((var_4 + (arr_3 [i_6 + 4] [i_6 - 3] [i_6]))) : ((min((arr_5 [8] [i_6] [7]), (arr_17 [i_6]))))))) ? (((var_6 - 0) - (max(2513649259, (arr_3 [i_6 + 4] [i_6] [4]))))) : var_3));
    }
    var_29 = (min(((min(-var_1, var_4))), ((var_3 * (~0)))));
    #pragma endscop
}
