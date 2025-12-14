/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_1 == 4294967267) == ((var_14 ? var_11 : var_12)))))) & 4294967251);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] |= 24;
        arr_4 [i_0] = (arr_0 [i_0] [13]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((+(((~45) ? 866356167 : (arr_7 [i_1])))));
        arr_10 [i_1] = (((-466868543 * 0) ? (((arr_5 [i_1] [i_1]) ^ (arr_5 [i_1] [i_1]))) : (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_15 [i_2] = (arr_1 [i_2] [i_2]);
        var_16 |= (((((arr_1 [i_2] [i_2]) ? var_6 : 12832))) ? var_9 : (((-12828 == (arr_13 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_22 [i_3] = ((((max(((~(arr_12 [i_3] [i_5]))), (arr_1 [i_3] [i_5])))) ? (((arr_14 [i_4 - 1]) ? (arr_14 [i_4 - 1]) : (arr_12 [i_4 + 1] [i_4 + 1]))) : 1));
                    arr_23 [i_3] = ((((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3]))) >= ((((arr_13 [6]) == 1))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_31 [i_3] [3] [5] [i_6 + 1] = ((+(((arr_11 [i_4 - 1]) * (arr_1 [i_7 - 1] [i_6 - 1])))));
                                arr_32 [i_6] [i_4] [i_5] [i_4 + 1] [i_3] = ((((((arr_5 [i_3] [i_3]) + (arr_24 [i_7] [1] [i_5])))) ? var_1 : ((((((arr_27 [i_4] [i_5]) ^ var_4))) ? -9874577667198614589 : ((((arr_2 [i_5]) ? var_9 : var_1)))))));
                                arr_33 [i_3] [i_3] [i_5] [i_3] = (((arr_27 [i_3] [i_3]) ? var_12 : (((var_10 * 1309931484) ? (arr_16 [i_3]) : (arr_2 [i_3])))));
                                var_17 += 3428611130;
                            }
                        }
                    }
                }
            }
        }
        var_18 = ((~(arr_5 [i_3] [i_3])));
    }
    var_19 = var_3;
    #pragma endscop
}
