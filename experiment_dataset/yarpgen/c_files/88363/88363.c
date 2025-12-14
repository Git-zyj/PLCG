/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_13;
    var_22 = (min(var_22, ((((((10630713684576111695 ? 30235 : 1724052539))) ? var_2 : ((var_12 ? (~var_6) : var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((((~(arr_3 [i_0])))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_24 = var_7;

                    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] = 178811073;
                        var_25 = (((((!(arr_3 [i_3 - 1])))) | (((arr_11 [i_0] [i_1] [i_2] [i_0] [i_3 - 1]) - (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3 + 1])))));
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_0] [i_2] [i_4] = max(((-((-28252 ? (arr_0 [3]) : (arr_1 [i_2]))))), var_18);
                        var_26 = (min(var_26, 1));
                    }
                }
                var_27 = (max((max((arr_8 [i_0] [i_1] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))), ((((arr_13 [i_0] [i_0] [i_0]) < var_17)))));
            }
        }
    }
    #pragma endscop
}
