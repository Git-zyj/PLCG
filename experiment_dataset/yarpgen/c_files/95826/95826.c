/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = ((-86 ? 86 : -77));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] |= ((77 << (77 - 74)));
                    arr_9 [11] [3] [i_2] = var_5;
                    arr_10 [i_0] [i_1] [i_0] = ((76 ? -76 : (13886 && -61)));
                }
            }
        }
        arr_11 [i_0] &= var_11;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_18 = (arr_1 [i_3]);
        var_19 = ((61 ? var_8 : -61));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_20 = var_4;
                    arr_21 [i_3] [i_3] [i_4] = ((61 ? 73 : -79));
                    arr_22 [i_3] [i_3] [0] |= (61 && 3034454542);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_21 = (61 | 67);
        var_22 += ((-61 ? 76 : 3294607279));
        arr_25 [i_6] = 8796093022207;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = -61;
        var_23 &= (1000360017 << (1000360016 - 1000359997));
        arr_30 [i_7] = 86;
    }
    var_24 = var_0;
    var_25 = var_15;
    #pragma endscop
}
