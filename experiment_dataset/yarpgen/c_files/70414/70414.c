/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_3 [i_0])));
        arr_4 [9] [i_0] |= (arr_2 [i_0 + 3]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (min(((var_16 ? (((arr_2 [i_0]) ? var_16 : (arr_0 [i_0]))) : var_0)), var_7));
                    arr_9 [2] [2] [i_1] = ((((((arr_7 [i_0] [i_0 + 3] [i_0 + 3]) ? ((min(var_8, (arr_7 [i_2] [i_1] [1])))) : (arr_6 [i_0] [i_1] [i_0 - 1])))) ? (((arr_8 [i_0] [i_0] [i_0] [1]) ? (min((arr_0 [i_0]), (arr_3 [i_0]))) : (((var_0 ? (arr_5 [i_2] [i_1]) : (arr_1 [i_2])))))) : (((arr_0 [i_0 + 3]) ? (arr_5 [i_0 + 1] [i_1]) : (arr_0 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = var_11;
                                arr_15 [i_1] [i_3] = (min(var_4, (((arr_2 [i_3 + 1]) ? (arr_12 [i_0] [13] [i_2] [i_3] [i_4]) : (arr_12 [i_0] [i_1] [i_2] [i_1] [i_4])))));
                                var_20 = (min((min((((arr_8 [i_0 - 1] [i_1] [i_3 - 1] [i_4]) ? (arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [1]) : var_2)), (!var_6))), ((((arr_11 [i_0 - 2] [i_2]) ? ((-(arr_8 [i_0 - 1] [i_1] [i_2] [14]))) : (arr_6 [i_4] [i_2] [i_0 + 1]))))));
                                arr_16 [i_0] [i_1] = ((((arr_3 [i_0 + 1]) ? (arr_8 [i_3 - 2] [i_3 - 2] [i_4] [i_3]) : (arr_3 [i_0 - 2]))));
                                var_21 = (((-1997299495 ? 8796092497920 : -853731127779381215)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= var_7;
    var_23 = (max(var_23, var_11));
    var_24 = (max(((var_6 ? (2147483647 / -358235338365065857) : var_12)), var_14));
    #pragma endscop
}
