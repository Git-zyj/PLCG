/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((3891976904522773388 ? 2251798739943424 : 2251798739943439)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] = (((((-(arr_1 [i_0])))) ? var_5 : var_10));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = 2251798739943404;
                            var_12 = (min((((~2147483647) - var_8)), ((((arr_0 [i_1]) ? var_5 : (var_2 < -15328))))));
                            var_13 += (!32767);
                            var_14 += var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [2] [2] [2] = (((((14554767169186778228 ? 32767 : 19))) - (((18444492274969608195 && var_7) / ((28 ? var_10 : 64694))))));
                            var_15 = (max(var_15, var_9));
                            arr_19 [i_0] [i_1] [i_4 - 1] [i_4] [i_5] [i_4] = (((~((1576127935 ? 28 : (arr_8 [i_0] [i_0] [0]))))));
                            var_16 = ((((arr_7 [0] [1]) >> (((arr_7 [1] [i_4 - 1]) - 786045161)))));
                            arr_20 [i_4] [4] [i_4 + 1] [i_0] = (min(var_4, (((!(arr_6 [i_4 + 1] [i_4 + 1] [i_4 - 2]))))));
                        }
                    }
                }
                arr_21 [i_1] [i_1] [i_0] = (!14554767169186778228);
                var_17 = ((min(var_1, (arr_2 [i_0]))) / (((((arr_2 [i_0]) <= 1817877886098418842)))));
            }
        }
    }
    var_18 = (min((((min(var_7, var_2)) / var_3)), ((14554767169186778228 - ((25170 ? 0 : 2251798739943424))))));
    #pragma endscop
}
