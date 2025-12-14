/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((-(~7766553314030334712)));
                var_16 = (max(var_16, ((((var_10 == 12298909035638645506) ? (((min(var_2, -122)))) : var_13)))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = (max((((arr_6 [i_0] [i_2 + 2] [i_2 + 2] [i_1]) ? (max(var_5, var_3)) : (((var_0 ? var_7 : -122))))), (max(((-82 ? var_3 : (arr_3 [i_0] [i_1 + 1]))), (var_9 % 1)))));
                    var_17 = 3414028167;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] = ((((min(var_4, (arr_12 [i_0] [i_1 - 2] [i_1] [i_3] [i_0] [i_5]))))) ? (max(-var_11, ((15251854 ? 4294967295 : var_4)))) : 6144);
                                var_18 = ((-((var_11 | (arr_0 [i_4])))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_3] = ((-(((arr_4 [i_1]) ^ 2488555846))));
                }
            }
        }
    }
    #pragma endscop
}
