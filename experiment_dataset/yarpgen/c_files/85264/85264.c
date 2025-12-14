/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max((max(var_14, ((9850445213686254330 ? 251 : 9)))), ((~(((arr_5 [i_0] [i_0] [1]) ? var_16 : var_14))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = (arr_12 [i_0]);
                            var_21 = (max(var_21, (((((arr_5 [i_2 - 1] [13] [i_2]) <= (arr_5 [i_2 - 1] [i_2] [i_2])))))));
                            var_22 = (((((-(((arr_10 [i_1] [1] [i_1] [i_1] [i_1 - 1] [i_1]) ? var_2 : var_1))))) ? 0 : ((-(~251)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [1] = ((0 < (arr_10 [i_0] [i_1] [i_0] [7] [i_0] [i_3 - 1])));
                        }
                    }
                }
                var_23 = (var_11 != var_1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_23 [1] [i_4] [i_5] [i_5] = var_15;
                    arr_24 [i_5] [i_5] [i_6] [i_5] = -1024658658;
                    var_24 = ((((((arr_20 [16] [i_5] [16] [i_5]) == (arr_19 [i_5] [i_5 + 1])))) & (arr_15 [i_5 + 1] [i_5 + 1])));
                }
            }
        }
    }
    var_25 = ((((!(((-3085 ? var_3 : var_8))))) ? ((15 ? 1638089274 : 17944029765304320)) : (2766121196 != 33554400)));
    var_26 = 1046;
    #pragma endscop
}
