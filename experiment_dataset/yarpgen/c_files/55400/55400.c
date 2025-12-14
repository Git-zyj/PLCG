/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_10 = ((-(((1015270871 >= ((min((arr_1 [i_0]), var_9))))))));
        var_11 = ((-(~502104871)));
        arr_2 [i_0] = (max(((121874256524866694 ? (arr_1 [i_0 - 1]) : var_3)), -var_6));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_1;
        arr_7 [i_1] = ((((((arr_4 [i_1]) / 121874256524866685))) ? var_8 : 113));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((var_7 ? (arr_8 [i_2] [i_2]) : 1)) ^ ((var_0 ? var_7 : -1715661249))));
        arr_11 [i_2] [i_2] = ((8184 ? ((var_3 ? var_5 : 1)) : -1715661234));
        var_12 = (arr_9 [i_2]);
        arr_12 [7] [i_2] = 127;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_13 = (~-2049354016);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_21 [11] [12] [12] [i_4] [i_4] = var_1;
                        var_14 = (((var_3 ? 15075 : 1)));
                        var_15 = var_1;
                    }
                }
            }
        }
    }
    var_16 = (min(var_6, 15));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                arr_26 [i_7] [12] = (--0);
                arr_27 [i_8] [i_7] [i_7] = (arr_13 [i_7]);
                arr_28 [i_7] [5] [i_8] = ((((2049354016 ? 59792525 : ((var_1 ? 12933641035119911493 : var_1)))) ^ 4099600054));
            }
        }
    }
    #pragma endscop
}
