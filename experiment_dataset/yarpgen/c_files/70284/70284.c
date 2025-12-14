/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max(var_15, 29)))));
    var_18 = (min((((var_12 ? var_10 : var_0))), ((((-127 - 1) <= -28745)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [2] |= (~226);
                    arr_10 [i_0] [i_0] [i_0] = (arr_3 [i_2]);
                    var_19 = (max(var_19, -var_2));
                }

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 -= (((~((-17 ? 50 : 205)))));
                    var_21 *= var_16;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_22 = ((var_5 <= ((3648464645 ? var_15 : 57960))));
                    var_23 = (min(var_23, (((!(arr_11 [i_4 + 1] [i_1 + 3] [i_1 + 3]))))));
                    var_24 -= var_11;
                }
                arr_16 [i_0] = (((((!-4597438010078025145) ? ((min(var_1, (arr_5 [i_0] [i_0] [i_0])))) : var_7)) | ((max(var_6, (67 == 9704586048871591541))))));
            }
        }
    }
    #pragma endscop
}
