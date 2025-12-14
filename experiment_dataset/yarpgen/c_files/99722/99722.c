/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_18;
    var_21 = (max(var_6, (((var_3 ? var_15 : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = var_12;
                                var_23 = var_0;
                            }
                        }
                    }
                    var_24 += ((!((((var_3 < var_11) % ((9975282687998314888 ? 127 : var_2)))))));
                    var_25 &= ((((127 ? -14486 : 13430163)) ^ (!-26636)));
                    arr_14 [i_2] [i_1] [i_0] = (min(var_13, var_1));
                    var_26 = ((27143 >> ((((-108 && (arr_1 [10])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [3] [i_7] = (((arr_20 [i_5]) ^ (var_16 % var_3)));
                    var_27 = ((((var_1 ? var_2 : (var_7 != -26636)))) ? 18227490863715395582 : -26636);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_28 = ((((4877395254184847221 ? -854637516 : (arr_29 [i_10] [i_10]))) & (arr_29 [i_8] [i_9])));
                    var_29 = (min(var_29, ((min((((!(arr_27 [i_9])))), (((max(var_3, (arr_27 [i_8]))) + ((((-127 - 1) ? (arr_24 [i_8]) : var_12))))))))));
                    var_30 = ((~((~(arr_25 [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
