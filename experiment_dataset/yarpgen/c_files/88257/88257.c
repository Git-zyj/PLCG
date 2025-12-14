/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((arr_1 [i_0]) ? ((1936898110 ? (arr_1 [i_0]) : var_6)) : ((((!(arr_1 [i_1])))))))));
                var_17 = (min(var_17, (((max(var_11, 1936898126))))));
                var_18 += (!var_5);
                arr_5 [i_0] [i_1] = ((!(arr_3 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_19 = (((arr_3 [i_2]) ? 1541647512 : (((arr_15 [i_5] [10]) + (((var_2 ? var_3 : (arr_10 [i_2]))))))));
                            arr_16 [13] [i_2] [i_4] [i_2] = (((arr_6 [i_2]) ? ((((arr_11 [i_3 + 2] [i_5 + 1] [i_5 + 1]) ? (arr_8 [i_3 + 2] [i_5 + 1]) : (arr_11 [i_3 + 2] [i_5 + 1] [i_5 + 1])))) : 2958880327));
                            arr_17 [i_2] = (arr_8 [i_3 - 1] [i_3 + 3]);
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_2] = ((2358069186 ? var_1 : (((1 ? -1761342857 : (arr_4 [i_4] [i_3] [i_2]))))));
                        }
                    }
                }
                arr_19 [i_2] [16] = (arr_8 [i_3] [i_2]);
                arr_20 [i_2] [i_2] = 4294967295;
                arr_21 [i_2] = var_4;
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
