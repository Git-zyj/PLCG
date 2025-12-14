/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((min((arr_2 [i_0]), 8898027427264400878))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_0] [i_2] = ((-(arr_0 [i_2])));
                    arr_12 [i_2] = min(255, -245336264457536313);
                    arr_13 [i_0] [9] = (arr_4 [i_0] [i_2]);
                    arr_14 [i_0] = 14664394627238444720;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_21 -= (arr_1 [i_3]);
        arr_17 [i_3] [i_3] = ((+(max((arr_9 [i_3] [i_3]), (arr_1 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_22 += (arr_15 [i_4] [2]);

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_23 = (min(var_23, -3456146267906341647));
                        arr_28 [i_4] [i_4] [i_7] = (arr_1 [i_4]);
                    }
                }
            }
            arr_29 [3] = 118;
            arr_30 [i_4] = (arr_19 [i_4]);
        }
        var_24 &= ((~((((~(arr_10 [i_4])))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_34 [8] &= (arr_32 [i_8]);
        arr_35 [i_8] [1] = ((~(arr_32 [i_8])));
        arr_36 [4] &= ((!(arr_33 [1] [i_8])));
    }
    var_25 = var_13;
    var_26 = (max(var_26, (~var_10)));
    #pragma endscop
}
