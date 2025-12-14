/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((9294 ? 36 : 3)) == var_17)))) | ((-250 ? ((((-30939 + 2147483647) >> (var_11 + 40)))) : ((10744849943580254734 ? 234 : var_10))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_11 [i_4] [i_3] [i_1] [i_1] [i_0] = -2957137395318083433;
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((var_3 ? (((arr_4 [i_0] [i_0]) ? (arr_8 [i_3]) : var_3)) : (var_18 <= 215)));
                            arr_13 [i_4] = 254;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_21 [i_7] [i_0] [i_5] [i_0] [i_0] = ((!(arr_18 [i_6] [i_6] [i_6 + 1] [i_6] [i_6])));
                            arr_22 [i_7] [i_7] [i_7] [i_0] [i_7] [i_7] = (((((-(arr_0 [i_5])))) || (3734 / 106)));
                        }
                    }
                }
            }
            arr_23 [i_1] [i_0] [i_0] = ((((-(arr_15 [i_0] [i_0] [i_0]))) >> (-126 + 139)));
        }
        arr_24 [12] &= ((((!(!-126))) || ((((!-96) ? (arr_7 [i_0] [10] [i_0 - 1] [i_0 - 1] [10] [i_0]) : (!var_6))))));
    }
    var_20 = ((((!(((var_12 ? 11065231415546235327 : var_15))))) ? (var_18 / var_6) : var_11));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                {
                    arr_33 [i_10] [i_9] [i_10] [i_10] = (((~65534) ? (((arr_25 [i_9 - 1]) + (arr_25 [i_9 + 2]))) : (1925 & 48674)));
                    arr_34 [i_8] [i_8] = (!var_12);
                }
            }
        }
    }
    var_21 = (((((((((1008806316530991104 ? var_3 : var_11))) && ((max(24, var_15))))))) / ((4216876502967209571 ? var_17 : ((var_16 ? var_2 : var_13))))));
    #pragma endscop
}
