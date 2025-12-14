/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = var_16;
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (((var_15 || (var_9 < var_11))));
                    arr_10 [i_0] [i_0] = ((((((1 & 3132508862) < (var_4 + var_11))))) < var_2);
                }
            }
        }
    }
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_16 [i_4] = ((((var_10 ? var_10 : var_3)) | var_9));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] [i_5] [i_5 - 4] [i_6] = (((((((var_8 ? var_13 : var_8))) && (13623544518901643172 || 44671))) ? 1 : (((((var_4 ? var_9 : var_8)))))));
                            arr_22 [i_3] [i_5] [i_5] [i_5 + 1] [i_6] [8] = var_12;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_29 [i_3] [i_3] [i_3] = (20864 || -224625053396259864);
                            arr_30 [i_4] [i_8] = (((((var_5 / ((var_14 ? var_7 : var_0))))) ? var_18 : (var_17 <= var_8)));
                        }
                    }
                }
                arr_31 [i_3] = (((((var_0 > ((var_2 ? var_4 : var_12))))) >> (((var_0 != var_3) ? var_6 : var_4))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_36 [i_3] [i_3] [i_3] [9] = ((((var_13 >> (((var_2 * var_15) - 8348116703035620306)))) * var_6));
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_13;
                            arr_38 [11] [i_4] [i_9 + 1] [i_4] [i_10] = (((((var_8 - var_18) ? (var_0 - var_4) : (var_8 & var_2))) ^ ((((((var_13 ? var_17 : var_6))) ? ((var_10 ? var_5 : var_6)) : var_15)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
