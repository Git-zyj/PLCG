/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 *= ((((((arr_1 [10] [i_0]) ? (arr_0 [i_0]) : (arr_1 [0] [i_0])))) ? ((((arr_0 [i_0]) ? (arr_1 [10] [10]) : (arr_0 [i_0])))) : var_5));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = (arr_8 [i_0] [i_1] [i_1] [i_3]);
                        arr_10 [i_0] = var_7;

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_18 = (max(var_18, (((var_12 ? var_9 : 12390218631100029976)))));
                            var_19 += (-var_2 ? 549755813824 : (max(18916, -549755813824)));
                            var_20 += arr_2 [i_3] [i_1];
                            arr_13 [i_0] [i_1] [i_2] [i_0] = 59916;
                        }
                    }
                }
            }
        }
        var_21 += (((-1592706427 >= var_5) ? (max(((58 & (arr_8 [i_0] [i_0] [i_0] [i_0]))), ((max(var_8, -1592706427))))) : (arr_6 [i_0] [i_0])));
    }
    #pragma endscop
}
