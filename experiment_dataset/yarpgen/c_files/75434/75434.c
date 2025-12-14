/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((~((~((var_1 ? var_14 : var_6)))))))));
    var_18 = 8160252558094130225;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (((((arr_3 [i_1]) % var_12)) - 10491104444775752982));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 ^= (max(((!(arr_11 [i_1 + 1] [i_2 - 2] [i_2]))), (((var_14 % 481658409) != (arr_0 [i_2 + 3] [i_1 - 2])))));
                                arr_13 [i_1] = (((arr_6 [i_2 - 2] [i_2]) ? (arr_6 [i_2 + 1] [i_2 - 2]) : 0));
                                var_21 = (min(-8160252558094130239, 253));
                                arr_14 [i_0] [i_0] [i_0] = 481658415;
                            }
                        }
                    }
                    var_22 *= ((~((~(arr_12 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_1 - 2] [i_2 + 3])))));
                }
            }
        }
    }
    var_23 = ((((~(var_4 <= var_6))) % -var_4));
    #pragma endscop
}
