/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 & ((((var_15 && 2009003122901499263) == ((var_13 ? var_13 : var_8)))))));
    var_19 = ((2100260242 ? var_13 : var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_0] = ((((arr_6 [i_0] [i_0] [i_2] [17] [i_1]) == 2147483647)));
                            arr_9 [i_3] [i_0] = (-(((max(var_11, 65535)) ^ (arr_6 [i_3 + 2] [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1]))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_0] = ((!(((arr_1 [i_0]) && (arr_4 [i_0] [i_0] [i_0] [23])))));
            }
        }
    }
    #pragma endscop
}
