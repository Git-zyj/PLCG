/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_2;
        var_11 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (min((arr_0 [i_2]), (arr_7 [i_0 + 1] [i_0 - 1] [i_0] [i_0])));
                    var_13 = (max(var_13, (arr_4 [i_0] [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] = (((((arr_8 [i_0 - 1] [i_1] [i_1] [i_3]) != (((((arr_9 [i_0 + 1]) == var_1)))))) ? (max(var_4, (~var_4))) : (((!((max(var_7, 0))))))));
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] = (~var_1);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_14 = var_8;
                        var_15 -= (arr_4 [i_4] [i_1] [i_1]);
                    }
                    arr_15 [i_2] = (min((arr_0 [i_0 + 1]), ((-(arr_0 [i_0 - 1])))));
                }
            }
        }
        var_16 = (arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_17 = ((((min((max(var_0, 12)), ((max(var_4, (arr_17 [i_5]))))))) ? (((!((min(var_2, var_0)))))) : ((((var_2 ^ var_7) == (arr_16 [i_5]))))));
        var_18 = ((max(var_9, (arr_16 [i_5]))));
        arr_18 [i_5] = (max(((((arr_16 [i_5]) ? (arr_17 [i_5]) : ((var_3 ? (arr_17 [i_5]) : (arr_17 [i_5])))))), ((((min((arr_16 [i_5]), var_6))) ? (max(4294967288, 8)) : (arr_16 [i_5])))));
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_19 = ((!((((var_3 ? 0 : var_8))))));
                    var_20 ^= (max((((arr_23 [i_6] [i_6 + 1] [i_7]) % (arr_20 [i_6]))), (((arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1]) ^ (arr_23 [i_7] [i_6 + 1] [i_8 + 1])))));
                }
            }
        }
    }
    var_21 = (max(var_4, (min(-29, 0))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            {
                arr_32 [i_10] [i_9] = 1073741823;
                arr_33 [i_10] [i_9] |= max((((arr_29 [i_10 + 1] [i_9]) ? (arr_29 [i_10 + 1] [i_10]) : (arr_29 [i_10 + 1] [i_9]))), ((max(var_0, (arr_29 [i_10 + 1] [i_10 + 1])))));
                arr_34 [i_9] = ((((((max(253, 8))) && (!var_7))) || ((max(var_7, (arr_30 [i_9 - 2]))))));
            }
        }
    }
    var_22 |= var_0;
    #pragma endscop
}
