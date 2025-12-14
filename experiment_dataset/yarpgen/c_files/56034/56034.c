/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((((~((16777215 ? var_15 : -9197729693932521819))))) ? 9197729693932521808 : ((((1 ? var_2 : (arr_3 [i_0] [i_0]))))));
                var_19 = ((var_11 ? (((26395 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2])))) : ((((max(var_8, 2951484005388628355))) ? (arr_2 [i_0] [i_0]) : (min((arr_2 [i_0] [i_0]), 8224025157148512456))))));
                var_20 = (((arr_3 [i_0 - 3] [i_0]) ? (((arr_3 [i_0 + 2] [i_0]) ? (arr_3 [i_0 + 2] [i_0]) : var_10)) : (((arr_3 [i_0] [i_0]) - (arr_3 [i_0 - 3] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = (((var_13 + 2147483647) << (2 - 2)));
                                arr_21 [i_2] [i_3] [i_6] = var_3;
                            }
                        }
                    }
                    arr_22 [i_3] [i_3] [i_3] [i_3] = -4967912172601943106;
                }
            }
        }
    }
    var_22 = (max(var_22, (((((min((var_1 && 57), ((-26395 ? var_16 : var_0))))) ? var_13 : ((85 ? var_0 : var_17)))))));
    var_23 *= (~229);
    #pragma endscop
}
