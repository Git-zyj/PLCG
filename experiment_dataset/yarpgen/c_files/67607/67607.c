/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = ((-1923248855 >> (((((((var_13 ? var_12 : 1923248855))) ? 2883327483 : var_13)) + 21))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = (max((-2147483647 - 1), 0));
                        arr_13 [10] [i_3] [i_2] [i_3] = ((15618 - ((var_17 ? (var_5 ^ var_6) : (var_16 / var_3)))));
                        arr_14 [i_0] [i_1] = (((((var_1 ? (((var_13 ? 15597 : var_12))) : ((var_0 ? 0 : var_0))))) ? (((65518 ? var_9 : var_12))) : ((max(4, var_7)))));
                        arr_15 [i_2] [i_3] [i_3] [i_3] [i_3] [i_0] = (((((((var_7 / 1411639813) != -var_1)))) / (((522240 ? 7448079309750044167 : var_9)))));
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_2] = var_18;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {

                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_31 [i_4] [i_4] [i_5] [i_6 - 1] [i_7] [i_8] [i_7] = var_3;
                                arr_32 [i_4] [i_4] [i_6 - 1] = (0 < 65535);
                            }
                        }
                    }
                    arr_33 [i_4] [i_4] = var_9;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_39 [i_4] [i_10] [i_5 + 1] [i_6] [i_9] [i_10] [i_10] = (((var_12 < var_8) ? (~var_9) : (max(var_3, var_14))));
                                arr_40 [i_4] [i_5] [i_6] [i_4] = 0;
                                arr_41 [i_4] [i_4] [i_5 - 1] [i_6] [i_9] [i_4] [i_10] = -1;
                                arr_42 [i_4] [i_4] = (min((((var_11 ? -21769 : 1401))), (10258661552116960914 * 1411639813)));
                            }
                        }
                    }
                    arr_43 [i_4] [i_4] [i_4] = (((~var_15) >= var_5));
                    arr_44 [i_4] [10] [16] = (((((var_10 ? -110 : -1715830158))) ? (((-21758 ? -21758 : 4294967295))) : ((var_13 ? var_17 : 0))));
                }
                arr_45 [i_4] [2] [i_4] = ((((min(var_18, var_17))) ? ((var_7 ? -46 : 2147483647)) : ((var_16 * ((2147483647 ? 0 : var_0))))));
                arr_46 [i_4] [i_4] [i_4] = ((~(max(var_4, var_1))));
            }
        }
    }
    #pragma endscop
}
