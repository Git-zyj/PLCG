/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((-(max((var_10 * -504870806), var_18))));
    var_20 = ((var_1 ? var_4 : -1459894281));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_21 = (max(var_21, (((arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1]) ? (min(1, 992178210)) : (((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]) / -1459894278))))));
                    var_22 = (max(var_22, -var_13));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_23 += var_16;
                            var_24 = (min(var_24, ((((((-(arr_4 [i_3 - 1] [i_3] [i_3 - 2])))) > var_5)))));
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_25 = ((-(arr_13 [i_0] [i_5 - 1] [1] [i_5])));
                    var_26 = (max(var_26, (~var_5)));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    arr_19 [i_6] = -2128885298;
                    var_27 = (max(var_27, (arr_6 [i_0])));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_28 = min(((((((arr_13 [i_0] [i_0] [i_1] [1]) ^ var_14)) <= ((min((arr_4 [i_0] [i_1] [i_1]), -1459894281)))))), (((161 != 57) ? 1 : -992178234)));
                    var_29 -= var_12;
                    var_30 = (max(var_30, (((-1459894287 ^ (((~20) ? (~1) : (arr_12 [i_0]))))))));
                }
                arr_22 [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_1]) != (((!var_0) ? (arr_21 [i_0] [i_0] [1]) : var_3))));
            }
        }
    }
    var_31 = (max(var_31, var_9));
    var_32 = var_2;
    #pragma endscop
}
