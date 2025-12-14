/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (var_0 != var_11);
    var_21 = ((((((1 ? var_11 : var_15)) % var_1))) || ((min(var_17, var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_22 *= (max((min((min((arr_4 [i_0] [i_1] [i_3]), var_14)), (!var_18))), ((min(((((arr_4 [7] [i_1] [i_2]) || (arr_8 [i_0] [i_1] [i_3])))), (arr_7 [i_1 - 2]))))));
                            arr_11 [i_3] [i_1] [i_1] [i_1] |= ((-(min((!var_2), (((arr_5 [i_0] [i_2] [i_2] [i_2]) ? (arr_9 [i_0] [i_0] [i_0] [10]) : (arr_7 [i_0])))))));
                        }
                    }
                }
                var_23 |= var_12;
                arr_12 [i_0] [i_0] = (min((min((arr_1 [i_1 + 2]), (arr_4 [i_0] [i_1 + 1] [i_1 + 3]))), (arr_1 [i_1 + 3])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 = var_17;
                                arr_19 [i_0] [i_1] [i_0] [i_0] [4] = (arr_4 [i_0] [i_0] [18]);
                                arr_20 [i_0] [i_0] = ((((min((arr_3 [i_0]), (min((arr_6 [i_0] [i_1] [i_0]), var_6))))) >> ((((min(32761, (arr_7 [i_0])))) - 86))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
