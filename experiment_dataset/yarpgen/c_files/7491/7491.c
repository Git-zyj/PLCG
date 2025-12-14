/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = var_9;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 += ((3623101167 ? 14 : 3623101189));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                        var_13 += (min((max(2182240320, (!var_9))), (((2168213996520458922 ? 18 : -1687787152)))));
                        arr_12 [i_0] [i_0] = ((~((14 >> (var_4 - 7)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((0 ? -30321 : 232));
        arr_16 [20] [i_4] |= (var_2 >= 1);
        arr_17 [i_4] = 671866151;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_4] [i_6] = -19809;
                    arr_24 [i_4] [i_6] [i_4] = (-8458961714913426871 ? var_10 : var_7);
                }
            }
        }
        var_14 = ((-(var_10 | var_9)));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_15 = (~-7757833295560981010);
        arr_27 [i_7] = var_10;
    }
    var_16 = var_3;
    #pragma endscop
}
