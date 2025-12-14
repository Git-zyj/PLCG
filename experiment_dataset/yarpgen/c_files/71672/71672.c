/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (max((((arr_5 [i_0] [i_0 - 3] [i_0 + 1]) - (arr_5 [i_0] [i_0 - 1] [i_0 - 1]))), (((arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 3])))));
                var_11 = (min(var_11, var_7));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_10 [i_0 + 1] [i_1] [i_0] [i_1] = -16508;
                        arr_11 [i_3 - 1] [i_3 + 3] [i_0] [i_0] [i_0] [i_0] = -668279267;
                        var_12 *= (((arr_5 [i_0] [i_1] [i_0]) ^ (((-101 >= (arr_1 [i_2] [i_1]))))));
                    }
                    var_13 = (((arr_5 [i_0] [i_0] [i_0]) ? var_4 : (arr_4 [i_0] [i_1] [i_2])));
                    arr_12 [i_0 + 2] [i_0 + 2] [i_0] = (((((((((arr_9 [i_0] [i_0 - 2] [i_1] [i_1] [i_2] [10]) >= (arr_7 [i_0] [i_0] [i_2])))) == 5846368524287337803)))) > (((~var_8) ^ ((((arr_6 [i_0 + 1] [i_1] [i_2]) << (((arr_0 [i_2]) - 1641210444))))))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((var_5 & ((max((arr_14 [i_0] [i_1] [i_4] [i_0]), (((arr_14 [i_1] [i_4] [i_1] [i_1]) ? (arr_4 [i_0 + 2] [i_0] [i_0]) : var_0))))))))));
                                var_15 = (min((min(13046957675311423386, 100)), (~13046957675311423386)));
                                var_16 = ((((!(arr_9 [i_0] [i_1] [i_0] [i_5 + 2] [i_0 - 2] [i_5 + 1]))) ? ((min(var_4, (arr_2 [i_5 + 2] [i_5 + 1])))) : ((var_6 << (((((arr_2 [i_5 + 2] [i_5 - 1]) + 1186448870)) - 60))))));
                            }
                        }
                    }
                    var_17 += 7484775085335334321;
                }
            }
        }
    }
    var_18 = (((13734827287266868096 ? -var_9 : (-32748 == 1033260762))));
    #pragma endscop
}
