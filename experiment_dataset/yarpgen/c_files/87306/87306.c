/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((14135364159856131163 ? -var_13 : ((var_13 ? var_9 : var_13))))));
    var_16 = ((var_12 == (((((var_1 << (7586581490094465709 - 7586581490094465707)))) ? var_6 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] = (((((12 ? (arr_3 [i_0] [i_1 - 1]) : (arr_1 [i_1] [i_1 + 2])))) ? (max((max(var_11, (arr_4 [i_0]))), (((var_1 ? var_7 : var_7))))) : (((arr_3 [i_1 + 1] [i_1 + 3]) / -7586581490094465709))));
                var_17 = ((((-var_6 ? (max(var_8, -6502682921007682543)) : ((((arr_0 [i_0]) ? var_0 : 7680)))))) || ((((~-11894) ? (var_12 / 2147483647) : ((var_1 ? var_7 : var_11))))));
                var_18 = var_7;
                var_19 *= (arr_5 [i_1] [i_1] [i_1 - 1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 = ((((!155) % var_1)));
                                var_21 = (((max(var_0, (arr_11 [i_3 - 2] [i_3 + 1] [i_3 - 2])))) ? (((arr_11 [i_3 + 1] [i_3 - 2] [i_3 + 1]) >> (var_2 + 1414564178))) : (!34));
                                arr_22 [i_4] [i_4] [i_6] = ((-((var_4 - (arr_19 [i_3 - 2] [i_3] [i_3 + 1] [11])))));
                                var_22 = (max(var_22, ((~(arr_15 [i_2])))));
                            }
                        }
                    }
                    arr_23 [i_4] = (((arr_12 [i_3] [i_3 - 2] [i_3 - 2]) <= var_14));
                }
            }
        }
    }
    #pragma endscop
}
