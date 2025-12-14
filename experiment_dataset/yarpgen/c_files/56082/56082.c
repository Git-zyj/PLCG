/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? ((-(arr_1 [i_0]))) : var_5));
        arr_4 [i_0] [i_0] = ((-(arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_2 + 3] [i_3] [i_2 - 3] [i_2 + 3] = ((-((var_9 ? var_15 : -7573367343914323291))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] = ((~((~(-127 - 1)))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (-127 - 1);
                    }
                }
            }
        }
        arr_15 [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = var_10;
        arr_21 [i_4] = ((-(~var_9)));
        arr_22 [i_4] = 21746;
        arr_23 [i_4] [i_4] = -26;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_33 [i_7] [i_7] = var_6;
                    arr_34 [i_6] = 119;
                }
            }
        }
        arr_35 [i_5] [i_5] = ((!(((var_4 ? var_1 : var_14)))));
        arr_36 [i_5] = ((((-4899 && (-32767 - 1))) ? var_11 : (arr_7 [i_5] [i_5] [i_5])));
    }
    var_17 = (((((-113 ? -5255886979651451032 : -4))) <= (((((132 ? var_10 : 1))) ? (((4546681758364566786 ? 41715 : -105))) : 70368207306752))));
    #pragma endscop
}
