/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = ((((((((var_4 ? var_0 : var_2))) | (min(var_7, var_11))))) ? (((((var_2 ? var_9 : var_11))) ? (var_12 >= var_4) : var_8)) : (((var_0 <= (var_4 >= var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = ((((min((arr_2 [i_2] [i_1]), var_7))) ? ((((((var_8 || (arr_0 [i_0])))) >= (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4])))) : ((max((arr_5 [i_1]), (arr_8 [i_0] [i_1 + 2] [i_1] [i_3] [i_4]))))));
                                arr_12 [i_1] = (((((((((arr_10 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0]) && (arr_5 [i_1])))) | (arr_4 [i_0] [i_1] [i_3] [i_1])))) ? ((max((((var_12 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_4])))), (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]) ^ var_7))))) : ((((min(var_2, var_8))) ? (((((arr_0 [i_1 - 2]) && (arr_0 [i_0]))))) : (arr_0 [i_0 + 3])))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (var_7 | var_12)));
                }
            }
        }
    }
    #pragma endscop
}
