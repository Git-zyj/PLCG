/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_10 ? var_15 : var_1)) ? 28 : var_15)));
    var_20 = ((~var_16) ? var_0 : (((((max(72, -31))) >> (var_12 - 1005108105)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (arr_5 [i_0] [i_2] [i_1 + 1]);
                    arr_6 [i_2] [i_2] = (((var_14 & var_0) & (21 & 70)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((((((arr_5 [i_2] [i_2] [i_0]) % (arr_0 [i_1 - 1])))) ? (max((arr_5 [i_3] [i_2] [i_1 + 1]), (arr_4 [i_2]))) : 15));
                        var_23 ^= ((~((~((1811911601 ? 0 : -105))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [13] [i_2] = 0;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_24 = (((3768887236 ? (arr_12 [i_1] [i_2] [i_2] [i_5]) : (arr_12 [i_0] [i_1] [i_2] [i_0]))));
                            var_25 = ((arr_18 [i_0] [i_1 + 1] [i_2] [i_4]) ? (arr_9 [7] [i_2]) : ((63 ? (arr_1 [i_1]) : -77)));
                            var_26 = ((((var_0 ? var_18 : var_7)) % (((arr_1 [i_4]) ? (arr_0 [11]) : var_6))));
                        }
                        var_27 = ((((15 || (arr_14 [i_0] [i_0] [i_0] [i_2]))) && (!var_3)));
                        arr_19 [i_2] = var_13;
                    }
                }
            }
        }
    }
    #pragma endscop
}
