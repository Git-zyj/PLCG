/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_3;
                arr_5 [i_0] [i_0] = (((((var_1 && ((min((arr_0 [i_0]), 65535)))))) ^ var_8));
                arr_6 [i_0] [i_1] [i_1] &= ((((min((((arr_1 [i_0] [i_0 + 1]) | (arr_1 [i_0] [i_1]))), (arr_1 [i_0] [i_1])))) ? (arr_3 [i_1]) : (((max(var_6, var_7))))));
                arr_7 [i_0] = ((min(var_2, (arr_3 [i_1]))) + (arr_2 [i_0] [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] = (arr_9 [i_2 - 3] [i_0] [i_2 + 1]);
                            var_14 += (((((arr_3 [i_3 + 3]) ? (((arr_2 [i_1] [i_1]) >> (var_5 - 46535))) : (arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_3 + 2]))) >= ((65535 ? (arr_10 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_10 [i_3 + 3] [i_1] [10] [i_3] [i_2])))));
                            var_15 *= ((((max((((arr_8 [i_0]) ? (arr_2 [i_3] [i_1]) : (arr_9 [i_3] [i_1] [i_0 + 1]))), (arr_11 [i_1] [i_2 - 3] [i_3 + 3])))) ? (max(var_7, (min(var_4, var_2)))) : ((max((((arr_0 [i_1]) ? 32 : 65508)), (arr_11 [i_3] [i_1] [i_2]))))));
                            var_16 = ((((min(var_1, var_9))) ? 32 : var_8));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (((var_0 != (((min(var_2, var_7)))))))));
    var_18 = (min(var_18, var_6));
    var_19 -= var_9;
    #pragma endscop
}
