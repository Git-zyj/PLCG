/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_10, (min((~var_2), var_8))));
        var_13 = ((!(~var_4)));
        arr_3 [i_0] [i_0] = ((((!(arr_2 [i_0]))) ? var_0 : var_0));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 *= 0;
        arr_6 [i_1] = (min(((var_3 ? (((65526 ? 1 : 32767))) : ((2901 ? var_7 : var_1)))), ((max((arr_4 [i_1]), var_3)))));
        arr_7 [i_1] [i_1] = ((1 ? 9223372036854775807 : 26));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_4] [i_5] = (!var_5);
                        var_15 = (~110);
                        arr_18 [i_3] [i_4] [i_5] = (!(arr_4 [i_3]));
                        arr_19 [i_3] [i_3] [i_4] [i_3] [i_4] [i_4] = ((1 ? var_8 : -2761177033677223259));
                    }
                }
            }
        }
        arr_20 [i_2] = (arr_11 [i_2] [i_2] [i_2]);
        arr_21 [i_2] = var_8;
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_16 = -17469;
        var_17 = 1;
    }
    for (int i_7 = 4; i_7 < 10;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [i_7] = (!var_5);
        var_18 &= (((min(0, (arr_25 [i_7] [i_7 - 2]))) + var_5));
        var_19 = ((~(arr_15 [i_7] [4] [i_7] [i_7 + 3] [i_7 + 3])));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = (1 + var_1);
        arr_33 [i_8] = ((99 ? (arr_23 [i_8 - 4]) : (arr_13 [i_8])));
        arr_34 [i_8] = (arr_16 [i_8] [i_8] [i_8]);
    }
    #pragma endscop
}
