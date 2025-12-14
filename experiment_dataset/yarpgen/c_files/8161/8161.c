/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((~15095220719542005788) <= 1)) ? (arr_0 [9] [i_1 + 1]) : 2147483647));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = ((-(var_3 - 2147483647)));
                            var_19 = (((arr_9 [i_0] [i_1] [i_0] [i_3]) & -5028499556937495912));
                        }
                    }
                }
                var_20 = (arr_8 [7] [7] [i_1 - 1] [i_0 + 1]);
            }
        }
    }
    var_21 = ((var_12 ? (((-127 - 1) ? (550818954 - 9223372036854775784) : var_8)) : (20293743235095131 == 10239348541326028945)));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (min(var_2, var_12));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_23 = (max(var_23, var_15));
            var_24 = (((arr_16 [i_5]) * (arr_16 [i_4])));
        }
        var_25 = (max(var_25, (arr_14 [9] [9])));
        var_26 = ((((((arr_14 [i_4] [i_4]) ? (arr_14 [10] [i_4]) : (arr_14 [i_4] [i_4])))) && ((((arr_15 [i_4]) ? 5303424639735140036 : -var_7)))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = (((-6633165699425976496 | 8033861501046201376) & (min((arr_20 [i_6]), (arr_20 [i_6])))));
        var_28 |= ((~(arr_16 [i_6])));
    }
    #pragma endscop
}
